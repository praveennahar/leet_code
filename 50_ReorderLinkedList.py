# 143. Reorder List
# Medium
# 8.1K
# 279
# Companies
# You are given the head of a singly linked-list. The list can be represented as:

# L0 → L1 → … → Ln - 1 → Ln
# Reorder the list to be on the following form:

# L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
# You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 

# Example 1:


# Input: head = [1,2,3,4]
# Output: [1,4,2,3]
# Example 2:


# Input: head = [1,2,3,4,5]
# Output: [1,5,2,4,3]
 

# Constraints:

# The number of nodes in the list is in the range [1, 5 * 104].
# 1 <= Node.val <= 1000



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:  # Time: O(n) and Space: O(1)

        # Find Middle: find middle and divide the list in to two
        slow, fast = head, head.next  # head(slow) -> 1 -> 2(fast) -> ...
        while fast and fast.next:     # while fast exists and there is next element to travel keep moving
            slow = slow.next          # fast moving twice as much as slow, will lead slow to point in the middle 
            fast = fast.next.next     # Even(4): slow = 2, fast = 4 & Odd(5): slow = 3, fast = None 

        # Reverse: reverse the second list
        second = slow.next       # in Odd case lets say 1-> 2(slow) -> 3 -> 4(fast): second = 3(2.next) 
        prev = slow.next = None  # Created Two separate nodes 1->2 & 3->4 
        while second:
            tmp = second.next   # tmp = 4
            second.next = prev  # 3 -> None
            prev = second       # prev = 3
            second = tmp        # second = 4
        # So, in the next iteration 
            # tmp = None 
            # 4.next = prev(3) and our linked is reversed
			# prev = 4 
			# second = None

        # Merge: merge the first with the reversed second  
        first, second = head, prev  # first will point to starting of the 1st Node and second to 2nd Node
        while second:
            tmp1, tmp2 = first.next, second.next  # tmp1 = 2, tmp2 = 3
            first.next = second                   # 1 -> 4
            second.next = tmp1                    # 4.next = 2 i.e. 1 -> 4 -> 2 
            first, second = tmp1, tmp2            # first = 2, second = 3
        # So, in the next iteration 
            # tmp1 = tmp2 = None
            # 2 -> 3 i.e. 1 -> 4 -> 2 -> 3
            # 1 -> 4 -> 2 -> 3 -> None
			# first = second = None