# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: TreeNode) -> List[str]:
        def paths(root,string,temp):
            if root is None:
                return
            string+=str(root.val)+"->"
            if root.left is None and root.right is None:
                temp.append(string)
            paths(root.left,string,temp)
            paths(root.right,string,temp)
        string=""
        temp=[]
        res=[]
        paths(root,string,temp)
        return [i[:len(i)-2] for i in temp]
        
