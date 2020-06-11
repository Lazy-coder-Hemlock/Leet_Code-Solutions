# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        curr=head
        l=[]
        while curr is not None:
            l.append(curr.val)
            curr=curr.next
        l=l[::-1]
        l.pop(n-1)
        l=l[::-1]
        head=ListNode(0)
        curr=head
        for i in l:
            curr.next=ListNode(i)
            curr=curr.next
        return head.next
