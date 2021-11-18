# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return []
        rv = []

        def dfs(root, dpth):
            if not root: return
            if len(rv) < dpth+1: rv.append(root.val)
            rv[dpth] = root.val

            dfs(root.left,  dpth+1)
            dfs(root.right, dpth+1)
            pass

        dfs(root, 0)
        return rv
        pass
