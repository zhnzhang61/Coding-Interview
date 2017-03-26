//Remove all elements from a linked list of integers that have value val.

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
    ListNode* removeElements(ListNode* head, int val) 
    {
    	//This only delinked the node from the linkedlist
        if(head == NULL) return NULL;
        head->next = removeElements(head->next,val);
        return head->val == val? head->next : head;
    }
};