// 2. Add Two Numbers
// Medium

// 24805

// 4795

// Add to List

// Share
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]
 

// Constraints:

// The number of nodes in each linked list is in the range [1, 100].
// 0 <= Node.val <= 9
// It is guaranteed that the list represents a number that does not have leading zeros.



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
    
   
    void insertAtTail(ListNode* &head,ListNode* &tail,int data){
        
        ListNode* curr = new ListNode(data);
        if(head == NULL){
            head = curr;
            tail = curr;
            return;
        }
        else{
            tail->next = curr;
            tail = curr;
        }
    }
  
     ListNode* add(ListNode* first, ListNode* second){
        
        int carry = 0;
        ListNode* tempHead = NULL;
        ListNode* tempTail = NULL;
        
        while(first != NULL || second != NULL || carry != NULL){
            int val1 = 0;
            if(first != NULL){
                val1 = first->val;
            }
            
            int val2 = 0;
            if(second != NULL){
                val2 = second->val;
            }
            
            int sum = carry + val1 + val2;
            int data = sum%10;
            
            insertAtTail(tempHead,tempTail,data);
            carry = sum/10;
            
            if(first != NULL){
                first = first->next;
            }
            if(second != NULL){
                second = second->next;
            }
        }
        return tempHead;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        // first = reverse(first);
        // second = reverse(second);
        
        ListNode* ans = add(first,second);
        // ans = reverse(ans);
        
        return ans;
    }
};