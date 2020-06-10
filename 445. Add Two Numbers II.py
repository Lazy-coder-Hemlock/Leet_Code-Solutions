# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        first=""
        second=""
        while l1:
            first+=str(l1.val)
            l1=l1.next
        while l2:
            second+=str(l2.val)
            l2=l2.next
        result=int(first)+int(second)
        head=ListNode(None)
        curr=head
        for word in str(result):
            curr.next=ListNode(int(word))
            curr=curr.next
        return head.next
            
