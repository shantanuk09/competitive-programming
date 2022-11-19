// LeetCode 647. Palindromic Substrings
class Solution{
public:
    int expandAroundCenter(string s, int left, int right){
        int count = 0;
        while(left >= 0 && right < s.size() && s[left] == s[right])
            left--, right++, count++;
        return count;
    }

    int countSubstrings(string s){
        int count = 0;
        for(int i = 0; i < s.size(); i++)
            count += expandAroundCenter(s, i, i) + expandAroundCenter(s, i, i + 1);
        return count;
    }
};