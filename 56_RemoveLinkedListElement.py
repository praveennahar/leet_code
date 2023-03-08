# 203. Remove Linked List Elements
# Easy

# 6840

# 203

# Add to List

# Share
# Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 

# Example 1:


# Input: head = [1,2,6,3,4,5,6], val = 6
# Output: [1,2,3,4,5]
# Example 2:

# Input: head = [], val = 1
# Output: []
# Example 3:

# Input: head = [7,7,7,7], val = 7
# Output: []
 

# Constraints:

# The number of nodes in the list is in the range [0, 104].
# 1 <= Node.val <= 50
# 0 <= val <= 50




# Definition for singly-linked list.
class ListNode:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next


# This is the class where we performe the functions like add,delete,search,print etc...
class LinkedList:
    def __init__(self,head = None):
        self.head = head

    def print_LL(self):    # This used to print the Linked List
        n = self.head

        if n is None:
            print("Linked List is empty")
        else:    
            while n is not None:
                print(n.data, end="->")
                n = n.next
            print()

    def add_begin(self,data):
        # n = self.head

        new_node = ListNode(data)
        new_node.next = self.head
        self.head = new_node

# Initialize head with 1 
# head = ListNode(None)
LL1 = LinkedList()  #Object of first Linked List 

Num = int(input("Enter How much Node you want : "))
for i in range(Num):
    d = int(input('Enter a value of Node : '))
    LL1.add_begin(d)

LL1.print_LL()   # This method calling for printing the Linked List
head = LL1.head   # We are make a copy of First object of Linked List


# This is the leetcode class for using remove the element
class Solution:
    # def removeElements(self, head, val):
    #     dummy = ListNode(next = head)
    #     prev,curr,forward = dummy, head, None

    #     while curr :
    #         forward = curr.next

    #         if curr.data == val:
    #             prev.next = forward
    #         else:
    #             prev = curr
    #         curr = forward
    #     return dummy.next # we are sending dummy.next bcz if our head is the same                   
    #                     #value we need to delete so that case It will return a Null .
        
    def deleteAtPosition(self,head,position):
        if position == 1:
            head = head.next 
        else:
            prev = ListNode(next=head)
            curr = ListNode(next=head)
            cnt = 1
            while(cnt < position):
                prev = curr
                curr = curr.next 
                cnt+=1

            prev.next = curr.next 
            print(head.data)



s1 = Solution()
# remove = int(input('Which Node you want to remove in the Linked List : '))
# LL2 = LinkedList(s1.removeElements(head,remove))   # Here We are making 2nd object of linked list
# LL2.print_LL()
LL2 = LinkedList(s1.deleteAtPosition(head,1))
print(LL2.head)
LL2.print_LL()
