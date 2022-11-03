// LeetCode 1898. Maximum Number of Removable Characters
// Binary Search.
class Solution{
public:
    int maximumRemovals(string s, string p, vector<int>& removable){
        int left = 0, right = removable.size();
        vector<int> map(s.size(), INT_MAX);
        for(int i = 0; i < removable.size(); i++)
            map[removable[i]] = i;
        while(left < right){
            int middle = (left + right + 1) / 2, j = 0;
            for(int i = 0; i < s.size() && j < p.size(); i++)
                if(map[i] >= middle && s[i] == p[j]) ++j;
            if(j == p.size()) left = middle;
            else right = middle - 1;
        }
        return left;
    }
};