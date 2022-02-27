// 1874. Minimize Product Sum of Two Arrays
class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        const int SIZE = 1e5 + 5;
        int n, sum, arr[SIZE];
        n = nums2.size(), sum = 0;
        for(int i = 0; i < n; i++)
            arr[i] = nums2[i];
        sort(nums1.begin(), nums1.end());
        sort(arr, arr + n);
        for(int i = 0, j = n - 1; i < n; i++, j--)
            sum += nums1[i] * arr[j];
        return sum;
    }
};