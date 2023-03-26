// 2487

class Solution {
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr)
        {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

public:
    ListNode* removeNodes(ListNode* head) 
    {
        if(!head -> next) return head;
        
        ListNode* head1 = reverse(head);

        ListNode* curr = head1;
        ListNode* forward = NULL;

        while(curr)
        {
            forward = curr -> next;

            while(forward != NULL) 
            {
                if(curr->val > forward->val) forward = forward -> next;
                else break;
            }

            curr -> next = forward;
            curr = curr -> next;
        }

        return head = reverse(head1);
    }
};