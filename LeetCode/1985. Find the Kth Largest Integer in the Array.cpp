// LeetCode 1985. Find the Kth Largest Integer in the Array
// Priority Queue with a Custom Comparator.
class Solution{
public:
    bool operator()(string &s1, string &s2){
        if(s1.size() != s2.size()) return s1.size() < s2.size();
        return s1 < s2;
    }

    string kthLargestNumber(vector<string>& nums, int k){
        priority_queue<string, vector<string>, Solution> largestNumber;
        for(auto num : nums)
            largestNumber.push(num);
        for(int i = 0; i < k - 1; i++)
            largestNumber.pop();
        return largestNumber.top();
    }
};
