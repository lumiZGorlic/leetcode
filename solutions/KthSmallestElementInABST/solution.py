# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        cnt = 0
        ret = -1

        def dfs(root):
            nonlocal cnt, ret
            if ret != -1: return # optimization

            if root.left: dfs(root.left)

            cnt += 1
            if cnt == k: ret = root.val

            if root.right: dfs(root.right)
            pass

        dfs(root)
        return ret
        pass
