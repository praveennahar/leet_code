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
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 1,len = 1;
        ListNode* t1 = head;
        ListNode* t2 = head;
        ListNode* temp = head;
        
        while(cnt<k){
            t1 = t1->next;
            cnt++;
        }
        
        while(temp->next){
            temp = temp->next;
            len++;
        }
        
        cnt = 1;
        
        while(cnt < (len-k+1)){
            t2 = t2->next;
            cnt++;
        }
        
        swap(t1->val,t2->val);
        
        return head;
    }
};