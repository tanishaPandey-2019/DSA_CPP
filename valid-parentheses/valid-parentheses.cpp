class Solution {
public:
    bool isValid(string str) {
        
    stack<char> s;
	int n = str.size();
	bool ans = true;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			s.push(str[i]);
		}
		else if(str[i] == ')')
		{
			if (!s.empty() && s.top() == '(')
			{
				s.pop();
			}
			else
			{
				ans = false;
				break;
			}
		}

		else if (str[i] == '}')
		{
			if (!s.empty() && s.top() == '{')
			{
				s.pop();
			}
			else
			{
				ans = false;
				break;
			}

		}

		else if (str[i] == ']')
		{
			if (!s.empty() && s.top() == '[')
			{
				s.pop();
			}
			else
			{
				ans = false;
				break;
			}

		}

	}
	if(!s.empty())
        return false;
    else
        return ans;
        
    }
};