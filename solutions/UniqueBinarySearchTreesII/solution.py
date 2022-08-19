# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[TreeNode]:
        store = defaultdict(list)

        def f(i, j):
            if j < i: return [None]
            if (i,j) in store: return store[(i,j)]

            for ii in range(i, j+1):
                l = f(i, ii-1)
                r = f(ii+1, j)

                for rr in r:
                    for ll in l:
                        root = TreeNode(ii)
                        root.left = ll
                        root.right = rr
                        store[(i,j)].append(root)
                        
            return store[(i,j)]
    
        return f(1, n)
        pass
