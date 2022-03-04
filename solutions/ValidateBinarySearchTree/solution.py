# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        minVal, maxVal = -1000000000000, 1000000000000
        
        def dfs(root, mn, mx):
            if not root: return True

            if root.val <= mn or root.val >= mx: return False

            return dfs(root.left, mn, root.val) and dfs(root.right, root.val, mx)
            pass

        return dfs(root, minVal, maxVal)
        pass
        
