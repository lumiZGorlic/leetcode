# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        ret = root.val

        def helper(root):
            nonlocal ret

            if not root: return 0

            cur = root.val
            l = helper(root.left)
            r = helper(root.right)

            ret = max(ret, cur, cur+l, cur+r, cur+l+r)
            return cur + max(0, l, r)

        helper(root)
        return ret
        pass
