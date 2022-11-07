// LeetCode 92. Reverse Linked List II
// Use a vector to create new linked list.
class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right){
        ListNode *dummy = head, *dummyHead = dummy;
        vector<int> nodes;
        for(auto node = head; node != NULL; node = node -> next)
            nodes.push_back(node -> val);
        for(int i = left - 1, j = right - 1; i < j; i++, j--)
            swap(nodes[i], nodes[j]);
        for(int i = 0; i < nodes.size(); i++){
            dummy -> next = new ListNode(nodes[i]);
            dummy = dummy -> next;
        }
        return dummyHead -> next;
    }
};