// LeetCode 451. Sort Characters By Frequency
class Solution{
public:
    static bool compare(const pair<char, int> &p1, const pair<char, int> &p2){
        return p1.second > p2.second;    
    }
    
    string frequencySort(string s){
        string h;
        vector<pair<char, int>> vr(205, make_pair('a', 0));
        for(char c : s)
            vr[c].first = c, vr[c].second++;
        sort(vr.begin(), vr.end(), compare);
        for(int i = 0; i < 205; i++)
            for(int j = 0; j < vr[i].second; j++)
                h += vr[i].first;
        return h;
    }
};