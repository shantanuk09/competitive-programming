// LeetCode 215. Kth Largest Element in an Array
// Priority Queue
class Solution{
public:
    int findKthLargest(vector<int>& nums, int k){
        priority_queue<int> arrayElements;
        for(auto n : nums)
            arrayElements.push(n);
        for(int i = 1; i < k; i++)
            arrayElements.pop();
        return arrayElements.top();
    }
};