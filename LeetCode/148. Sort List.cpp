// LeetCode 148. Sort List
// Push values of the node to a vector, sort and create a new list | Time Complexity O(nlogn) | Space Complexity O(n)
class Solution{
public:
    ListNode* sortList(ListNode* head){
        vector<int> vr;
        ListNode *dummy = new ListNode(0), *dummyHead = dummy;
        for(auto node = head; node != NULL; node = node -> next)
            vr.push_back(node -> val);
        sort(vr.begin(), vr.end());
        for(int i = 0; i < vr.size(); i++){
            dummy -> next = new ListNode(vr[i]);
            dummy = dummy -> next;
        }
        dummy -> next = NULL;
        return dummyHead -> next;
    }
};