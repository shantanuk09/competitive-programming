# LeetCode 141. Linked List Cycle
# If you arrive at a node you have already seen, there's a cycle.
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        cycle = False
        dict = {}
        current = head
        while current != None and cycle != True : 
            if current in dict : 
                cycle = True
            else : 
                dict[current] = True
                current = current.next
        return cycle

# Using two pointer.
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head is None : return False
        slow = head
        fast = head.next
        while slow != fast : 
            if fast is None or fast.next is None : return False
            slow = slow.next
            fast = fast.next.next
        return True