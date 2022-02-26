# 206. Reverse Linked List
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        current = head
        while current : 
            next = current.next
            current.next = prev
            prev = current
            current = next
        return prev