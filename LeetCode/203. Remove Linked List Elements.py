# LeetCode 203. Remove Linked List Elements
# Copy Linked List into an Array.
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        arr = []
        while head : 
            if head.val != val : arr.append(head)
            head = head.next
        for i in range(1, len(arr)) : 
            arr[i - 1].next = arr[i]
        if len(arr) : arr[len(arr) - 1].next = None
        if(len(arr)) : return arr[0]
        else : return None