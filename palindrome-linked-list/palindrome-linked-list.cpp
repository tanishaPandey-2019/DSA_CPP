/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//     void reverseLinkedList(ListNode *head)
//     {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* sec = head;
        
//         while(sec != NULL)
//         {
//             sec = sec->next;
//             curr->next = prev;
//             prev = curr;
//             curr = sec;
//         }
//         head = prev;
//     }
    bool isPalindrome(ListNode* head) {
        
        ListNode * temp = head;
        
        stack <int> s;
        
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL)
        {
            int value = s.top();
            s.pop();
            
            if(value == temp->val)
            {
                temp = temp->next;
            }
            else
            {
                return false;
            }
        }
        
        return true;
        
        
        
    }
};