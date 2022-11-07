// LeetCode 147. Insertion Sort List
// Use a vector to create new linked list.
class Solution{
public:
    static bool compare(const ListNode *node1, const ListNode *node2){
        return node1 -> val < node2 -> val;
    }

    ListNode* insertionSortList(ListNode* head){
        vector<ListNode*> nodes;
        for(auto node = head; node != NULL; node = node -> next)
            nodes.push_back(new ListNode(node -> val));
        sort(nodes.begin(), nodes.end(), compare);
        for(int i = 1; i < nodes.size(); i++)
            nodes[i - 1] -> next = nodes[i];
        return nodes[0]; 
    }
};