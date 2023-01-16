// LeetCode 2487. Remove Nodes From Linked List
class Solution{
public:
    ListNode* removeNodes(ListNode* head){
        int largest = 0;
        vector<ListNode*> nodes;
        vector<ListNode*> finalNodes;

        for(auto node = head; node != NULL; node = node -> next)
            nodes.push_back(new ListNode(node -> val));

        for(int i = nodes.size() - 1; i >= 0; i--){
            if(nodes[i] -> val >= largest){
                largest = nodes[i] -> val;
                finalNodes.push_back(nodes[i]);
            }
        }

        for(int i = finalNodes.size() - 1; i >= 0; i--){
            if(i == 0) finalNodes[i] -> next = NULL;
            else finalNodes[i] -> next = finalNodes[i - 1];
        }
        
        return finalNodes[finalNodes.size() - 1];
    }
};