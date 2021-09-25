# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return []
        ret = [[]]
        q = [[root, 0]]
        
        cur = 0
        
        while q:
            node, depth = q.pop(0)
            if depth > cur:
                ret.append([])
                cur = depth
            ret[-1].append(node.val)

            if node.left: q.append([node.left, depth+1])
            if node.right: q.append([node.right, depth+1])

        return ret
