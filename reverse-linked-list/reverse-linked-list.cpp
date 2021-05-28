// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        stack<int> s;
        
        ListNode* temp = head;
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        
        if(head == NULL)
        {
            return head;
        }
        ListNode* newNode = new ListNode;
        newNode->val = s.top();
        newNode->next = NULL;
        s.pop();
        ListNode* newHead = newNode;
        while(!s.empty())
        {
            ListNode* node = new ListNode;
            node->val = s.top();
            node->next = NULL;
            s.pop();
            newNode->next = node;
            newNode = node;
        }
        
        return newHead;
        
//         ListNode* prev = NULL;
//         ListNode* current = head;
//         ListNode* second = head;
        
//         while(second != NULL)
//         {
//             second = second->next;
//             current->next = prev;
//             prev = current;
//             current = second;
//         }
//         head = prev;
        
//         return head;
        
//         ListNode* first = NULL;
//         ListNode* present = head;
//         ListNode* second = head;
        
//         while(second != NULL)
//         {
//             second = second->next;
//             present->next = first;
//             first = present;
//             present = second;
//         }
//         head = first;

        
//         return head;
        
        
    }
};