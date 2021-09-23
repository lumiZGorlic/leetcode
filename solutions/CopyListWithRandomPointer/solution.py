"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        mp = {}

        def helper(head):
            if not head: return None

            cp = deepcopy(head)
            mp[head] = cp

            cp.next = helper(head.next)

            if head.random: cp.random = mp[head.random]

            return cp

        return helper(head)
        pass        
