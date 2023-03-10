# 83. Remove Duplicates from Sorted List
# Easy
# 6.8K
# 240
# Companies
# Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

# Example 1:


# Input: head = [1,1,2]
# Output: [1,2]
# Example 2:


# Input: head = [1,1,2,3,3]
# Output: [1,2,3]
 

# Constraints:

# The number of nodes in the list is in the range [0, 300].
# -100 <= Node.val <= 100
# The list is guaranteed to be sorted in ascending order.



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# class Solution:
#     def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         # if head is None : return head

#         curr = head
#         while curr:
#             while curr.next and curr.val == curr.next.val:
#                 curr.next = curr.next.next
#             curr = curr.next    
#         return head





# Second Approach

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head):
        if not head : return None
        temp = head
        while temp.next:
            if temp.val == temp.next.val:
                temp.next = temp.next.next   
            else:
                temp = temp.next
            # head = temp        
        return head
    


    # c++ Solution

# class Solution {
# public:
#     ListNode* deleteDuplicates(ListNode* head) {
#         if (!head) return NULL;

#         ListNode* curr = head;

#         while(curr->next){
#             if(curr->val == curr->next->val){
#                 curr->next = curr->next->next;
#             }
#             else {
#             curr = curr->next;
#             }
#         }
#         return head;
#     }
# };