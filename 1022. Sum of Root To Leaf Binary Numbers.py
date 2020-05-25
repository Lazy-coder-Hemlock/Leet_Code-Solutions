# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: TreeNode) -> int:
        def all_paths(root,small,large):
            if root is None:
                return
            small+=str(root.val)
            if root.left is None and root.right is None:
                large.append(small)
            all_paths(root.left,small,large)
            all_paths(root.right,small,large)
        large=[]
        small=""
        all_paths(root,small,large)
        total=0
        for i in large:
            total+=int(i,2)
        return total
        
