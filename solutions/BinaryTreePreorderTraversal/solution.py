# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        ret, stack = [], []
        cur = root

        while cur:

            if cur.left:
                ret.append(cur.val)
                stack.append(cur)
                cur = cur.left
            else:
                ret.append(cur.val)
                if cur.right:
                    cur = cur.right
                elif stack:
                    # if no right child found in this loop, we exit the main loop
                    while stack:
                        cur = stack.pop()
                        if cur.right:
                            cur = cur.right
                            break
                        cur = None
                else:
                    break

        return ret

        '''
        #more concise solution
        res, stack = [], [];
        cur = root

        while cur or stack:
            while cur:
                res.append(cur.val)
                stack.append(cur)
                cur = cur.left
            cur = stack.pop()
            cur = cur.right

        return res'''
