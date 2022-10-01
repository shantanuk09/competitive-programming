// LeetCode 1265. Print Immutable Linked List in Reverse
class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode* head){
        if(head == NULL) return;
        printLinkedListInReverse(head -> getNext());
        head -> printValue();
    }
};