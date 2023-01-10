# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if not head or not head.next: return head

        odd, even = head, head.next
        evenStart = even
        oddEnd = odd

        while 1:
            odd2 = even.next

            if not odd2:
                odd.next = None
                break
            else:
                odd.next = odd2
                oddEnd = odd2

            even2 = odd2.next
            if not even2:
                even.next = None
                break
            else:
                even.next = even2

            odd, even = odd2, even2


        oddEnd.next = evenStart
        return head
        pass
