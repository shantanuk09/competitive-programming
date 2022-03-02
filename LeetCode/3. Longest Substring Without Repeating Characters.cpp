// LeetCode 3. Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size(), start = 0, maxLength = 0, arr[1000] = {};
        for(int end = 0; end < len; end++){
            if(arr[s[end]]){
                while(arr[s[end]])
                    arr[s[start++]]--;
                arr[s[end]]++;
            }
            else arr[s[end]]++;
            maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};