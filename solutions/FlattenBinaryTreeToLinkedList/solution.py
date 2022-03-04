# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: TreeNode) -> None:
        if not root: return None
        nodes = []

        def preOrder(root):
            if not root: return

            nodes.append(root)
            preOrder(root.left)
            preOrder(root.right)
            pass

        preOrder(root)

        for i, n in enumerate(nodes):
            n.left = None
            if i < len(nodes)-1: n.right = nodes[i+1]

        return nodes[0]
        pass
