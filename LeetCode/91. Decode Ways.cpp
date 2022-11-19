// LeetCode 91. Decode Ways
// Dynamic Programming
class Solution{
public:
    int numDecodings(string s){
        int n = s.size();
        vector<int> vr(n + 1);
        vr[n] = 1;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '0') vr[i] = 0;
            else{
                vr[i] = vr[i + 1];
                if(i < n - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7')) vr[i] += vr[i + 2];
            }
        }
        return n == 0 ? 0 : vr[0];
    }
};