// LeetCode 152. Maximum Product Subarray
// Dynamic Programming.
class Solution{
public:
    int maxProduct(vector<int>& nums){
        int maxProduct = 1, minProduct = 1, largest = INT_MIN;
        for(auto e : nums){
            if(e < 0) swap(maxProduct, minProduct);
            maxProduct = max(maxProduct * e, e), minProduct = min(minProduct * e, e);
            largest = max(largest, maxProduct);
        }
        return largest;
    }
};