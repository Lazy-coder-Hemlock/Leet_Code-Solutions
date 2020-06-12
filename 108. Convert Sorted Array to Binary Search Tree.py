# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        def sorted_tree(nums):
            if len(nums)==0:
                return None
            mid=len(nums)//2
            node=TreeNode(nums[mid])
            node.left=sorted_tree(nums[:mid])
            node.right=sorted_tree(nums[mid+1:])
            return node
            
        res=sorted_tree(nums)
        return res
