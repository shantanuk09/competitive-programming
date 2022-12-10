// LeetCode 1461. Check If a String Contains All Binary Codes of Size K
// Generate all substrings of size k and compare.
class Solution{
public:
    bool hasAllCodes(string s, int k){
        int n = s.size();
        unordered_set<string> codes;
        for(int i = 0; i <= n - k; i++)
            codes.insert(s.substr(i, k));
        return codes.size() == (1 << k);
    }
};
