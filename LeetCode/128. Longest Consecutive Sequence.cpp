// LeetCode 128. Longest Consecutive Sequence
// Using Hash Map.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length = 0, longest = 0, previous;
        map<int, int> mp;
        for(int n : nums)
            mp[n] = 1;
        previous--;
        for(auto [key, value] : mp){
            if(length == 0) previous = key - 1;
            if(previous + 1 == key) length++, previous = key, longest = max(length, longest);
            else length = 1, previous = key, longest = max(length, longest);
        }
        return longest;
    }
};