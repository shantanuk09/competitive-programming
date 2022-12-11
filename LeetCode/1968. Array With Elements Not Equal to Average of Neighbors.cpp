// LeetCode 1968. Array With Elements Not Equal to Average of Neighbors
// Two Pointer.
class Solution{
public:
    vector<int> rearrangeArray(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> vr(n);
        int i = 0, j = 0;
        for(; i < n && j < n; i++, j += 2)
            vr[j] = nums[i];
        j = 1;
        for(; i < n && j < n; i++, j += 2)
            vr[j] = nums[i];
        return vr;
    }
};
