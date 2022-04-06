# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root: return 0
        q = [[root,1]]
        ret = 0

        while q:
            n, d = q.pop(0)
            if n.left:
                q.append([n.left, d+1])
            if n.right:
                q.append([n.right, d+1])
            ret = max(ret, d)

        return ret
        pass
