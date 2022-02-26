// 49. Group Anagrams
class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        unordered_map<string, vector<string>> ump;
        vector<vector<string>> vr;
        for(auto s : strs)
            ump[baseAnagram(s)].push_back(s);
        for(auto [key, value] : ump)
            vr.push_back(value);
        return vr;
    }
    string baseAnagram(string s){
        sort(s.begin(), s.end());
        return s;
    }
};