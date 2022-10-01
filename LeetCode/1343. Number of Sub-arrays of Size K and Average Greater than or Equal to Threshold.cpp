// LeetCode 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, sub = 0;
        for(int i = 0; i < arr.size(); i++){
            if(i < k) sum += arr[i];
            else sum += arr[i] - arr[i - k];
            if(i >= k - 1 && sum / k >= threshold) sub++;
        }
        return sub;
    }
};