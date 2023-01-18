// LeetCode 2225. Find Players With Zero or One Losses
class Solution{
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches){
        vector<vector<int>> answer(2);
        map<int, int> loss;
        for(auto match : matches){
            int winner = match[0], loser = match[1];
            loss[winner] = 0, loss[loser] = 0;
        }
        for(auto match : matches)
            loss[match[1]]++;
        for(auto [key, value] : loss)
            if(value == 0 || value == 1) answer[value].push_back(key);
        return answer;
    }
};