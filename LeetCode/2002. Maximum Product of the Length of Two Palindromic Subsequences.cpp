// LeetCode 2002. Maximum Product of the Length of Two Palindromic Subsequences
// Backtracking.
class Solution{
public:
    int result = 0;

    bool isPalindrome(string &s){
        for(int i = 0, j = s.size() - 1; i < j; i++, j--)
            if(s[i] != s[j]) return false;
        return true;
    }

    void DFS(string &s, int index, string &s1, string &s2){
        if(index >= s.size()){
            if(isPalindrome(s1) && isPalindrome(s2)) result = max(result, (int) s1.size() * (int) s2.size());
            return;
        }

        s1.push_back(s[index]);
        DFS(s, index + 1, s1, s2);
        s1.pop_back();

        s2.push_back(s[index]);
        DFS(s, index + 1, s1, s2);
        s2.pop_back();

        DFS(s, index + 1, s1, s2);
    }

    int maxProduct(string s){
        string s1, s2;
        DFS(s, 0, s1, s2);
        return result;
    }
};
