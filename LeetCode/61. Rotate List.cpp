// LeetCode 61. Rotate List
// Push list values into a vector and rearrange
class Solution{
public:
    ListNode* rotateRight(ListNode* head, int k){
        vector<int> vr;
        ListNode *dummy = new ListNode(0), *dummyHead = dummy;
        for(auto node = head; node != NULL; node = node -> next)
            vr.push_back(node -> val);
        vector<int> rotate(vr.size());
        for(int i = 0; i < vr.size(); i++)
            rotate[(i + k) % vr.size()] = vr[i];
        for(int i = 0; i < rotate.size(); i++){
            dummy -> next = new ListNode(rotate[i]);
            dummy = dummy -> next;
        }
        dummy -> next = NULL;
        return dummyHead -> next;
    }
};