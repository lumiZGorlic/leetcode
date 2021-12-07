# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getDirections(self, root: Optional[TreeNode], startv: int, destv: int) -> str:
        startpath, destpath = [], []

        def lowestCommonAncestor(root, startv, destv):
            nonlocal startpath, destpath

            def dfs(root, val, path, direct):
                nonlocal startpath, destpath

                if not root: return False
                path.append([root.val, direct])
                if root.val == val or dfs(root.left, val, path, 'L') or dfs(root.right, val, path, 'R'): return True
                path.pop()
                return False
                pass

            dfs(root, startv, startpath, 'N')
            dfs(root, destv, destpath, 'N')

            for i in range(min(len(startpath), len(destpath))):
                if startpath[i][0] != destpath[i][0]:
                    startpath, destpath = startpath[i:], destpath[i:]
                    return

            startpath, destpath = startpath[min(len(startpath), len(destpath)):], destpath[min(len(startpath), len(destpath)):]
            pass

        lowestCommonAncestor(root, startv, destv)

        ret = ['U' for _ in range(len(startpath))] + [d for n, d in destpath]
        return ''.join(ret)
        pass
