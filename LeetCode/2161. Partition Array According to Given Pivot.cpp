// LeetCode 2161. Partition Array According to Given Pivot
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> vr;
        for(auto n : nums)
            if(n < pivot) vr.push_back(n);
        for(auto n : nums)
            if(n == pivot) vr.push_back(n);
        for(auto n : nums)
            if(n > pivot) vr.push_back(n);
        return vr;
    }
};