# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: TreeNode) -> int:
        total=0
        string=""
        def total_path(root,total,string):
            if root is None:
                return
            string+=str(root.val)
            if root.left is None and root.right is None:
                total.append(string)    
            total_path(root.left,total,string)
            total_path(root.right,total,string)
        total=[]
        total_path(root,total,string)
        score=0
        for i in total:
            score+=int(i)
        return score
