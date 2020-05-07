# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        curr=head
        k=1
        odd=[]
        even=[]
        while curr is not None:
            if k%2==1:
                odd.append(curr.val)
                k+=1
            else:
                even.append(curr.val)
                k+=1
            curr=curr.next
        odd=odd+even
        print(odd)
        p=0
        curr=head
        while curr is not None:
            curr.val=odd[p]
            p+=1
            curr=curr.next
        return head
