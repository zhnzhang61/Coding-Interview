//Reverse a singly linked list.
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
    ListNode* reverseList(ListNode* head) 
    {
        if(!head || !(head->next))//base case
        {
            return head;
        }
        //The recursive only reverse two nodes
        ListNode* node = reverseList(head -> next);//the final starting node
        head -> next -> next = head;//let the next node point to the head node
        head -> next = NULL;//let the head node point to nothing
        return node;//return the node
    }
};