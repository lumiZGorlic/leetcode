# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        ppath, qpath = [], []

        def dfs(root, n, path):
            if not root: return False
            path.append(root)

            if root == n or dfs(root.left, n, path) or dfs(root.right, n, path): return True

            path.pop()
            return False
            pass

        dfs(root, p, ppath)
        dfs(root, q, qpath)

        for i in range(min(len(ppath), len(qpath))):
            if ppath[i] != qpath[i]: return ppath[i-1]

        return ppath[min(len(ppath), len(qpath)) - 1]
        pass
