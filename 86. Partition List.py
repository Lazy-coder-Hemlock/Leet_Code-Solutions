# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def partition(self, head: ListNode, x: int) -> ListNode:
        curr=head
        first=[]
        second=[]
        while curr is not None:
            if curr.val>=x:
                second.append(curr.val)
            else:
                first.append(curr.val)
            curr=curr.next
        first=first+second
        head=ListNode(0)
        curr=head
        for i in first:
            curr.next=ListNode(i)
            curr=curr.next
        return head.next
