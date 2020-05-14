# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def findMode(self, root: TreeNode) -> List[int]:
        if root is None:
            return []
        queue=[]
        l=[]
        queue.append(root)
        while queue:
            node=queue.pop(0)
            l.append(node.val)
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
        c=max(Counter(l).values())
        return [k for k,v in Counter(l).most_common() if v==c]
