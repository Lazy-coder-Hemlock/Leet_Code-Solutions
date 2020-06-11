# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSubPath(self, head: ListNode, root: TreeNode) -> bool:
        res=""
        while head is not None:
            res+=str(head.val)
            head=head.next
        def paths(root,string,temp):
            if root is None:
                return
            string+=str(root.val)
            if root.left is None and root.right is None:
                temp.append(string)
            paths(root.left,string,temp)
            paths(root.right,string,temp)
        string=""
        temp=[]    
        paths(root,string,temp)
        for patt in temp:
            if res in patt:
                return True
        return False
