// 152. Maximum Product Subarray
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProduct = 1, maxProduct = 1, largest = INT_MIN;
        for(int e : nums){
            if(e < 0) swap(maxProduct, minProduct);
            maxProduct = max(e, maxProduct * e);
            minProduct = min(e, minProduct * e);
            largest = max(largest, maxProduct);
        }
        return largest;
    }
};