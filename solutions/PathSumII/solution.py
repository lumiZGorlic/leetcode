# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], target: int) -> List[List[int]]:
        # TODO try also BFS and more solutions
        
        if not root: return []
        ret, cur = [], []
        
        def dfs(root, cur, s):
            cur += [root.val]
            s += root.val

            if not root.left and not root.right:
                if s == target: ret.append(cur[:])
                cur.pop()
                return

            if root.left: dfs(root.left, cur, s)
            if root.right: dfs(root.right, cur, s)
 
            cur.pop()
            pass
        
        dfs(root, cur, 0)
        return ret
        pass
