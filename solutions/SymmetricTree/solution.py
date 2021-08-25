# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:

        def isPalindrome(s):
            return s == s[::-1]
            pass

        dummy = TreeNode('d')
        cur_level = 0
        q = [[root, 0]]
        s = []

        while q:
            n, level = q.pop(0)

            if level != cur_level:
                if not isPalindrome(s): return False
                s = []
                cur_level += 1

            s.append(n.val)

            if n.left:
                q.append([n.left, level+1])
            elif n.val != 'd':
                q.append([dummy, level+1])

            if n.right:
                q.append([n.right, level+1])
            elif n.val != 'd':
                q.append([dummy, level+1])

        return True
        pass
