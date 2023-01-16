// LeetCode 2433. Find The Original Array of Prefix Xor
class Solution{
public:
    vector<int> findArray(vector<int>& pref){
        for(int i = pref.size() - 1; i > 0; i--)
            pref[i] ^= pref[i - 1];
        return pref;
    }
};