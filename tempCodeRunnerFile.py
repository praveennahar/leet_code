class Solution:
#     def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         # if head is None : return head

#         curr = head
#         while curr:
#             while curr.next and curr.val == curr.next.val:
#                 curr.next = curr.next.next
#             curr = curr.next    
#         return head

