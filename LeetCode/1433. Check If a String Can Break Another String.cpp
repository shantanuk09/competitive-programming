// LeetCode 1433. Check If a String Can Break Another String
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        bool f1 = true, f2 = true;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] < s2[i]) f1 = false;
            if(s1[i] > s2[i]) f2 = false;
        }
        if(f1 || f2) return true;
        else return false;
    }
};