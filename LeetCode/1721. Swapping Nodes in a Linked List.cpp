// LeetCode 1721. Swapping Nodes in a Linked List
class Solution{
public:
    ListNode* swapNodes(ListNode* head, int k){
        vector<ListNode*> nodes;
        for(auto node = head; node != NULL; node = node -> next)
            nodes.push_back(new ListNode(node -> val));
        int n = nodes.size();
        swap(nodes[k - 1], nodes[n - k]);
        for(int i = 1; i < n; i++)
            nodes[i - 1] -> next = nodes[i];
        return nodes[0];
    }
};