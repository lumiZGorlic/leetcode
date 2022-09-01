# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def distributeCoins(self, root: Optional[TreeNode]) -> int:
        ret = 0

        # think of it as an amount of work per node to redistribute
        # each node can do work - can pull from/push to child
        # e.g. in subtree, if same amount nodes and coins, all is fine
        # if not, then coins will be pulled from/pushed to parent node
        def dfs(root):
            nonlocal ret
            if not root: return 0, 0
            lnodes, lcoins = dfs(root.left)
            rnodes, rcoins = dfs(root.right)

            ret += abs(lnodes - lcoins) + abs(rnodes - rcoins)

            return lnodes + rnodes + 1, lcoins + rcoins + root.val
            pass

        dfs(root)
        return ret
        pass
