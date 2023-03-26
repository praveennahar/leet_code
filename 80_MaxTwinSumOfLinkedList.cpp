// 2130

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
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
public:
    int pairSum(ListNode* head) {
        if(!head->next->next) return (head->val + head->next->val);
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* head1 = head;
        ListNode* head2 = reverse(slow->next);
        int sum = 0;
        int ans = INT_MIN;
        
        while(head1 && head2){
            sum = head1->val + head2->val;
            
            ans = max(sum,ans);
            
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return ans;
    }
};