// LeetCode 86. Partition List
// Push list values into a vector and sort.
class Solution{
public:
    ListNode* partition(ListNode* head, int x){
        vector<int> elements, part;
        ListNode *dummy = new ListNode(0), *dummyHead = dummy;
        for(auto node = head; node != NULL; node = node -> next)
            elements.push_back(node -> val);
        for(auto e : elements)
            if(e < x) part.push_back(e);
        for(auto e : elements)
            if(e >= x) part.push_back(e);
        for(int i = 0; i < part.size(); i++){
            dummy -> next = new ListNode(part[i]);
            dummy = dummy -> next;
        }
        dummy -> next = NULL;
        return dummyHead -> next;
    }
};