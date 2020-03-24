class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        temp=head
        value=""
        while temp:
            value+=str(temp.val)
            temp=temp.next
        return int(value,2)
