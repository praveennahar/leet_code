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
    ListNode* reverseLL(ListNode* head){
        if(!head || !head->next){
            return head;
        }
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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* newhead = reverseLL(head);
        ListNode* ptr = newhead;
        
        vector<int> ans;
        stack<int> st;
        
        while(ptr){
            while(!st.empty() && st.top()<=ptr->val){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(0);
            }
            else ans.push_back(st.top());
            st.push(ptr->val);
            ptr = ptr->next;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};