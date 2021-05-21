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
        
        ListNode* first = NULL;
        ListNode* present = head;
        ListNode* second = head;
        
        while(second != NULL)
        {
            second = second->next;
            present->next = first;
            first = present;
            present = second;
        }
        head = first;

        
        return head;
        
        
    }
};