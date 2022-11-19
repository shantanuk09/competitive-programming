// LeetCode 5. Longest Palindromic Substring
// Dynamic Programming. 
class Solution{
public:
    int expandAroundCenter(string s, int left, int right){
        while(left >= 0 && right < s.size() && s[left] == s[right])
            left--, right++;
        return right - left - 1;
    }

    string longestPalindrome(string s){
        if(s.empty()) return "";
        int start = 0, end = 0;
        for(int i = 0; i < s.size(); i++){
            int len1 = expandAroundCenter(s, i, i), len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);
            if(len > end - start) start = i - (len - 1) / 2, end = i + len / 2;
        }
        return s.substr(start, end - start + 1);
    }
};