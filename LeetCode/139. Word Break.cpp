// LeetCode 139. Word Break
// Dynamic Programming | Time Complexity O(n^3) | Space Complexity O(n)
class Solution{
public:
    bool wordBreak(string s, vector<string>& wordDict){
        set<string> st(wordDict.begin(), wordDict.end());
        vector<bool> vr(s.size() + 1);
        vr[0] = true;
        for(int i = 1; i <= s.size(); i++){
            for(int j = 0; j < i; j++){
                if(vr[j] && st.find(s.substr(j, i - j)) != st.end()){
                    vr[i] = true;
                    break;
                }
            }
        }
        return vr[s.size()];
    }
};