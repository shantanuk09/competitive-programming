// LeetCode 128. Longest Consecutive Sequence
// Use a map.
class Solution{
public:
    int longestConsecutive(vector<int>& nums){
        int previous = INT_MAX;
        int length;
        int maxLength;
        map<int, int> mapping;
        for(auto n : nums)
            mapping[n] = 1;
        for(auto [key, value] : mapping){
            maxLength = max(maxLength, length);
            if(previous == INT_MAX || key - previous != 1) length = 1;
            else length++;
            previous = key;
        }
        return max(maxLength, length);
    }
};