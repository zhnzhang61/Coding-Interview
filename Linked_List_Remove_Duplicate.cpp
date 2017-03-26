//Given a sorted linked list, delete all duplicates such that each element appear only once.
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head)
        {
            return head;
        }
        //set up the initial pointer
        int val = head -> val;
        ListNode* p = head;
        
        while(p&&p->next)
        {
            if(p->next->val!=val)//if the value of the next node is different from current value
            {
                //move the pointer to the next value and pointer
                val = p ->next->val;
                p = p ->next;
            }
            else
            {
                //make a new node to mark the node after the next node and modify the pointer of current node
                ListNode * n = p->next->next;
                p->next= n;
            }
        }
        return head;
    }
};