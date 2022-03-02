// LeetCode 19. Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head, *fast = head;
        for(int i = 0; i < n; i++)
            fast = fast -> next;
        if(!fast) return head -> next;
        while(fast -> next)
            slow = slow -> next, fast = fast -> next;
        slow -> next = slow -> next -> next;
        return head;
    }
};