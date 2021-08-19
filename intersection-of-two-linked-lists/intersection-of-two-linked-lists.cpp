/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        vector<ListNode*> vec;
        
        ListNode* temp = headA;
        while(temp != NULL)
        {
            vec.push_back(temp);
            temp = temp->next;
        }
        
        int n = vec.size();
        
        temp = headB;
        while(temp != NULL)
        {
            for(int i = 0;i<n;i++)
            {
                if(temp == vec[i])
                {
                    return temp;
                    break;
                }
            }
            temp = temp->next;
        }
        
        return NULL;
        
    }
};