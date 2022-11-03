# LeetCode 234. Palindrome Linked List
# Copy Linked List into an Array.
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        arr = []
        while head : 
            arr.append(head.val)
            head = head.next
        return arr == arr[::-1]