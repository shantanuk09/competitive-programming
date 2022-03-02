// LeetCode 424. Longest Repeating Character Replacement
// Sliding Window.
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), arr[26] = {0}, start = 0, maxCount = 0, maxLength = 0;
        for(int end = 0; end < n; end++){
            maxCount = max(maxCount, ++arr[s[end] - 'A']);
            while(end - start + 1 - maxCount > k){
                arr[s[start] - 'A']--;
                start++;
            }
            maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};