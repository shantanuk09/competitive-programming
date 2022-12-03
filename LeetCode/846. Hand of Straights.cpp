// 2028. 846. Hand of Straights
// Map.
class Solution{
public:
    bool isNStraightHand(vector<int>& hand, int groupSize){
        map<int, int> mp;
        for(auto e : hand)
            mp[e]++;
        for(auto &[key, value] : mp){
            if(value > 0){
                for(int i = groupSize - 1; i >= 0; i--){
                    mp[key + i] -= value;
                    if(mp[key + i] < 0) return false;
                }
            }
        }
        return true;
    }
};
