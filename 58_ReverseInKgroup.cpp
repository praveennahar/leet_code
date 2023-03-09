// 25. Reverse Nodes in k-Group
// Hard

// 10564

// 562

// Add to List

// Share
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]
// Example 2:


// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,4,5]
 

// Constraints:

// The number of nodes in the list is n.
// 1 <= k <= n <= 5000
// 0 <= Node.val <= 1000
 


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case
        if(!head){
            return NULL;
        }
        // Reverse the node
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int cnt = 0;
        
        
        // THis is conditon only in leetcode 1 2 3 4 5 k=3 then leet wants 3 2 1 4 5 last 4 and 5 are as itis..
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
             if(cursor == nullptr) 
                 return head;
            cursor = cursor->next;
        }
        
        while(curr && cnt < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        // Recursive call 
        if(next != NULL){
            head->next = reverseKGroup(next,k); // After reverse head is point that node where we can add the more node after recurrsive call 1->2->recurrsion
        }
        head = prev;
        return head;
        
    }
};