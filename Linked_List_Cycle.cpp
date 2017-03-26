//Given a linked list, determine if it has a cycle in it.
//We use two pointers, one move one step at a time and the other one move two step at a time, if they collide, there is a cycle.
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
    bool hasCycle(ListNode *head) 
    {
        if(head == NULL || head -> next == NULL)
        {
            return false;
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast -> next!= NULL && fast->next->next!= NULL)
        {
            fast = fast ->next->next;
            slow = slow ->next;
            
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};