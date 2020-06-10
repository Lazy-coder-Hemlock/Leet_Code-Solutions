# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
        res=[]
        string=""
        count=0
        def paths(root,string,res):
            if root is None:
                return
            string+=str(root.val)
            if root.left is None and root.right is None:
                res.append(string)
            paths(root.left,string,res)
            paths(root.right,string,res)
        def check(s):
            return sum(v%2==1 for v in Counter(s).values()) <= 1
        paths(root,string,res)
        for result in res:
            if check(result):
                count+=1
        return count
