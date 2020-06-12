class MyLinkedList:

    def __init__(self):
        self.l=[]
        """
        Initialize your data structure here.
        """
        

    def get(self, index: int) -> int:
        try:
            return self.l[index]
        except:
            return -1
        """
        Get the value of the index-th node in the linked list. If the index is invalid, return -1.
        """
        

    def addAtHead(self, val: int) -> None:
        self.l.insert(0,val)
        """
        Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
        """
        

    def addAtTail(self, val: int) -> None:
        self.l.insert(len(self.l),val)
        """
        Append a node of value val to the last element of the linked list.
        """
        

    def addAtIndex(self, index: int, val: int) -> None:
        if index==len(self.l):
            self.l.insert(len(self.l),val)
        elif index>len(self.l):
            pass
        else:
            self.l.insert(index,val)
        
        
        """
        Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted.
        """
        

    def deleteAtIndex(self, index: int) -> None:
        if index>=len(self.l):
            pass
        else:
              del self.l[index]
        """
        Delete the index-th node in the linked list, if the index is valid.
        """
        


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)
