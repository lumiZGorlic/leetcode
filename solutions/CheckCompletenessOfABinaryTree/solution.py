# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCompleteTree(self, root: Optional[TreeNode]) -> bool:
        if not root: return True
        q = [[root, 1]]
        expected = 1

        while q:
            n, idx = q.pop(0)

            if idx != expected: return False
            expected += 1

            if n.left: q.append([n.left, idx*2])
            if n.right: q.append([n.right, idx*2+1])

        return True
        pass
