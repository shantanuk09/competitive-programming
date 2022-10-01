# LeetCode 206. Reverse Linked List
# Using an array.
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head : return None
        nodes = []
        while head : 
            nodes.append(head)
            head = head.next
        for i in range(len(nodes) - 1, -1, -1) :
            if i == 0 : nodes[0].next = None
            else : nodes[i].next = nodes[i - 1]
        return nodes[len(nodes) - 1]
        
# Constant space.
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