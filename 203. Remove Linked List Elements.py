# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        curr=head
        l=[]
        while curr is not None:
            if curr.val!=val:
                l.append(curr.val)
            curr=curr.next
        head=ListNode(0)
        curr=head
        for i in l:
            curr.next=ListNode(i)
            curr=curr.next
        return head.next
