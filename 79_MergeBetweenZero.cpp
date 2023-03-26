// 2181 question

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* curr = head -> next;
        ListNode* forward = NULL;

        while(curr && curr -> next)
        {
            forward = curr -> next;

            while(forward -> val != 0)
            {
                curr -> val += forward -> val;
                forward = forward -> next;
            }

            curr -> next = forward -> next;
            curr = curr -> next;
        }

        return head -> next;
    }
};