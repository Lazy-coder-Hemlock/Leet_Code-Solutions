# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:
        curr=head
        l=[]
        while curr is not None:
            l.append(curr.val)
            curr=curr.next
        i=0
        while i<len(l):
            if i+k<=len(l):
                l[i:i+k]=l[i:i+k][::-1]
            i+=k
        head=ListNode(0)
        curr=head
        for i in l:
            curr.next=ListNode(i)
            curr=curr.next
        return head.next
