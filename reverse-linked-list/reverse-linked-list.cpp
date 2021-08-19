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
    ListNode* reverseList(ListNode* head) {
        
        stack<ListNode*> s;
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            s.push(temp);
            temp = temp->next;
        }
        
        ListNode* node = new ListNode();
        temp = node = s.top();
        s.pop();
        
        while(!s.empty())
        {
            temp->next = s.top();
            temp = temp->next;
            s.pop();
            
        }
        temp->next = NULL;
        return node;
        
        
    }
};