// LeetCode 280. Wiggle Sort
// Sort and rearrange.
class Solution{
public:
    void wiggleSort(vector<int>& nums){
        int i = 0;
        int operations = 0;
        int n = nums.size();
        int left = 0;
        int right = (n % 2 == 1) ? (n + 1) / 2 : n / 2;
        vector<int> vr(nums.begin(), nums.end());
        sort(vr.begin(), vr.end());
        while(1){
            nums[i] = vr[left];
            i++, left++, operations++;
            if(operations == n) break;

            nums[i] = vr[right];
            i++, right++, operations++;
            if(operations == n) break;
        }
    }
};