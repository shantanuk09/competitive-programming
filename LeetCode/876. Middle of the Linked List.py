# LeetCode 876. Middle of the Linked List
# Simple two pointer implementation.
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow, fast = head, head
        while fast and fast.next : 
            slow, fast = slow.next, fast.next.next
        return slow

# Using a list.
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        lt = []
        while head : 
            lt.append(head)
            head = head.next
        return lt[len(lt) // 2]