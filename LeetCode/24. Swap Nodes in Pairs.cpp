// LeetCode 24. Swap Nodes in Pairs
// Use a vector to create new linked list.
class Solution{
public:
    ListNode* swapPairs(ListNode* head){
        if(head == NULL || head -> next == NULL) return head;
        ListNode *prev = head, *current = head -> next;
        vector<ListNode*> vr;
        while(prev && current){
            int x = prev -> val, y = current -> val;
            vr.push_back(new ListNode(current -> val));
            vr.push_back(new ListNode(prev -> val));
            prev = (current -> next) ? (current -> next) : (NULL);
            current = (prev && prev -> next) ? (prev -> next) : (NULL);
        }
        if(prev) vr.push_back(prev);
        for(int i = 1; i < vr.size(); i++)
            vr[i - 1] -> next = vr[i];
        vr[vr.size() - 1] -> next = NULL;
        return vr[0];
    }
};