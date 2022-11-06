# LeetCode 83. Remove Duplicates from Sorted List
# Manipulate current pointer.
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = head
        while current and current.next != None : 
            if current.val == current.next.val : current.next = current.next.next
            else : current = current.next
        return head