# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: TreeNode, key: int) -> TreeNode:
        def helper(toRemove):
            # n will be a node with the lowest value in the subtree
            n = toRemove.right

            if not n.left:
                toRemove.right = n.right
                toRemove.val = n.val
            else:
                n2 = n
                while n.left:
                    n2 = n
                    n = n.left

                if not n.right:
                    n2.left = None
                else:
                    n2.left = n.right
                toRemove.val = n.val
            pass

        def dfs(root, parent, side):
            if not root: return
            if root.val == key:
                if not root.right:
                    if side == 'l':
                        parent.left = root.left
                    else:
                        parent.right = root.left
                else:
                    helper(root)
            elif root.val > key:
                dfs(root.left, root, 'l')
            else:
                dfs(root.right, root, 'r')
            pass

        if not root: return None

        if root.val == key:
            if not root.left and not root.right:
                return None
            elif root.left and not root.right:
                return root.left
            elif not root.left and root.right:
                return root.right

        dfs(root, None, 'l')
        return root
        pass

