//Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
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
       if(!head) return 0;
       if(!head->next) return head;
       
       int val = head->val;
       ListNode *p = head->next;
       
       if(p->val != val)//If the two values are different
       {
           head->next = deleteDuplicates(p);//use the second node as the new head 
           return head;//leave the first head
       }
       else
       {
           while(p && p->val == val)//when the two values are different
           {
               p = p->next;//move the pointer forward
           }
           return deleteDuplicates(p);//start fromt the new pointer
       }
    }
};