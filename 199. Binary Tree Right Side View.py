# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: TreeNode) -> List[int]:
        l=[]
        if root is None:
            return l
        queue=[]
        queue.append(root)
        while queue:
            size=len(queue)
            res=[]
            for i in range(size):
                node=queue.pop(0)
                res.append(node.val)
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            l.append(res[-1])
        return l
