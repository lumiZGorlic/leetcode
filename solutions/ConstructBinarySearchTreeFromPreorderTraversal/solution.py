# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstFromPreorder(self, preorder: List[int]) -> TreeNode:      

        def f(l):
            ln = len(l)
            if not ln: return None

            val = l[0]
            root = TreeNode(val)

            if ln == 1: return root

            if l[1] < val:
                i = 1
                while i < ln and l[i] < val:
                    i += 1

                root.left  = f(l[1:i])
                root.right = f(l[i:])

            else:
                root.right = f(l[1:])

            return root
            pass

        return f(preorder)
        pass
