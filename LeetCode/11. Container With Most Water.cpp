// LetCode 11. Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), left = 0, right = n - 1, maxArea = 0;
        while(left < right){
            maxArea = max(maxArea, (right - left) * min(height[left], height[right]));
            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};