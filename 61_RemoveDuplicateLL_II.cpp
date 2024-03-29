// 82. Remove Duplicates from Sorted List II
// Medium

// 7363

// 197

// Add to List

// Share
// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

// Example 1:


// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]
// Example 2:


// Input: head = [1,1,1,2,3]
// Output: [2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order.
// Accepted
// 584,397
// Submissions
// 1,274,635
// Seen this question in a real interview before?

// Yes

// No




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
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head) return head;
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode* curr = dummy->next;
    
        while(curr) {
            while(curr->next && curr->val == curr->next->val) {
                curr = curr->next;
            }
        
                if(prev->next == curr) {
                    prev = curr;
                }
                else {
                prev->next = curr->next;
            }
            curr =  curr->next;
        }
    
        return dummy->next;
    }
    
};