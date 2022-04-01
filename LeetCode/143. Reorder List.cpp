// LeetCode 143. Reorder List
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> vr;
        for(auto node = head; node; node = node -> next)
            vr.push_back(node);
        int left = 1, right = vr.size() - 1;
        for(int i = 0; i < vr.size(); i++, head = head -> next){
            if(i % 2) head -> next = vr[left++];
            else head -> next = vr[right--];
        }
        head -> next = NULL;
    }
};