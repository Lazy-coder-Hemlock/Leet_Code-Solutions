# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        curr=head
        l=[]
        while curr is not None:
            l.append(curr.val)
            curr=curr.next
        final=[i for i in l if l.count(i)==1]
        head=ListNode(0)
        curr=head
        for i in final:
            curr.next=ListNode(i)
            curr=curr.next
        return head.next
