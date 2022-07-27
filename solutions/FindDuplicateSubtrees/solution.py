# cool read
# https://leetcode.com/problems/find-duplicate-subtrees/discuss/106016/O(n)-time-and-space-lots-of-analysis

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findDuplicateSubtrees(self, root: TreeNode) -> List[TreeNode]:
        ret = []
        mp = dict()

        def dfs(root):
            if not root: return ['#']

            s = []
            s.append(' ')
            s.append(str(root.val))
            s += dfs(root.left)
            s += dfs(root.right)

            t = tuple(s)
            if t not in mp: mp[t] = []
            mp[t].append(root)
            
            return s
            pass
        
        dfs(root)
        
        for k,v in mp.items():
            if len(v) > 1: ret.append(v[0])
        return ret
        pass
