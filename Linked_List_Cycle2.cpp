//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
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
    ListNode *detectCycle(ListNode *head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }
        
        ListNode * fast = head;
        ListNode * slow = head;
        
        while(fast -> next != NULL && fast->next->next !=NULL)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow)
            {
                slow = head;
                while(slow != fast)
                {
                    //The equivalent relationship is that the distances from where the cycle begins to the head and to the place where two pointer matchs are the same.
                    fast = fast -> next;
                    slow = slow -> next;
                }
                return slow;
            }
        }
        return NULL;
    }
    
};