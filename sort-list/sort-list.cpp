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
    ListNode* sortList(ListNode* head) {
        
        ListNode* temp  = head;
        
        vector<int> arr;
        if(head == NULL)
            return NULL;
        
        while(temp!= NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        ListNode* node = new ListNode;
        node->val = arr[0];
        node->next = NULL;
        temp = node;
        
        for(int i = 1;i<n;i++)
        {
            ListNode* newNode = new ListNode;
            newNode->val = arr[i];
            node->next = newNode;
            node = newNode;
            // newNode->next = NULL;
            
            // node->val = arr[i];
            // node->next = NULL;
            // head->next = node;
            // newNode->next = NULL;
        }
        
        return temp;
        
    }
};