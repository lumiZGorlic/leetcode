# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        ret = []
        
        def helper(root):
            if not root:
                ret.extend([',' , '#'])
                return
            
            ret.extend([',', str(root.val)])
            helper(root.left)
            helper(root.right)

        helper(root)

        return ''.join(ret[1:])
        pass


    def deserialize(self, data):
        data = data.split(',')
        idx = 0
        
        def helper():
            nonlocal idx
            
            if data[idx] == '#':
                idx += 1
                return None
            
            root = TreeNode(int(data[idx]))
            idx += 1

            root.left = helper()
            root.right = helper()
            return root

        return helper()
        pass

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))
