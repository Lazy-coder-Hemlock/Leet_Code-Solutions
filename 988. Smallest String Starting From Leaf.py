# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: TreeNode) -> str:
        if root is None:
            return ""
        def paths(root,path,big_path):
            if root is None:
                return
            path+=chr(root.val+97)
            if root.left is None and root.right is None:
                big_path.append(path[::-1])
            paths(root.left,path,big_path)
            paths(root.right,path,big_path)
        path=""
        big_path=[]
        paths(root,path,big_path)
        return min(big_path)
