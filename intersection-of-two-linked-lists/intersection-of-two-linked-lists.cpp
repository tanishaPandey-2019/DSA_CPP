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
        
        multimap<int, ListNode*> nodeAdd;
        multimap<int, ListNode*> :: iterator itr;
        
        ListNode* temp = headA;
        while(temp != NULL)
        {
            
            nodeAdd.insert(pair<int,ListNode*> (temp->val, temp));
            temp = temp->next;
        }
        
        ListNode* tempB = headB;
        while(tempB != NULL)
        {
            // itr = nodeAdd.find(tempB->val);
            if(nodeAdd.find(tempB->val) != nodeAdd.end()) 
            {
                itr = nodeAdd.find(tempB->val);
                if(itr->second == tempB)
                {
                    return tempB;
                }
                
            }
            tempB = tempB->next;
        }
        
        return NULL;
    }
};