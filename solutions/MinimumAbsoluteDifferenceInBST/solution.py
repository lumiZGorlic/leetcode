# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        ret = inf

        # return a pair [min value in the subtree, min value in the subtree]
        def dfs(root):
            nonlocal ret

            if not root.left and not root.right:
                return root.val, root.val

            if root.left and root.right:
                mn1, mx1 = dfs(root.left)
                mn2, mx2 = dfs(root.right)                
                ret = min(ret, abs(mx1 - root.val), abs(mn2 - root.val))

                return min(root.val, mn1, mn2), max(root.val, mx1, mx2)

            elif root.left:
                mn, mx = dfs(root.left)                
                ret = min(ret, abs(mx - root.val))

                return min(root.val, mn), max(root.val, mx)

            elif root.right:
                mn, mx = dfs(root.right)                
                ret = min(ret, abs(mn - root.val))

                return min(root.val, mn), max(root.val, mx)            
            pass

        dfs(root)
        return ret
        pass
