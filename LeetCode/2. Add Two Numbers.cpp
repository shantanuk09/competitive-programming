// LeetCode 2. Add Two Numbers
// Standard addition of two numbers.
class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;
        while(l1 || l2 || carry != 0){
            int x = l1 ? l1 -> val : 0;
            int y = l2 ? l2 -> val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            current -> next = new ListNode(sum % 10);
            current = current -> next;
            l1 = l1 ? l1 -> next : NULL;
            l2 = l2 ? l2 -> next : NULL;
        }
        return dummy -> next;
    }
};
