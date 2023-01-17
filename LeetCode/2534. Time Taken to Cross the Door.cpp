// LeetCode 2534. Time Taken to Cross the Door
class Solution{
public:
    vector<int> timeTaken(vector<int>& arrival, vector<int>& state){
        vector<int> answer(arrival.size());
        queue<pair<int, int>> enter, exit;
        pair<int, int> SENTINEL = {INT_MAX, INT_MAX};
        for(int i = 0; i < arrival.size(); i++){
            if(state[i] == 1) exit.push({i, arrival[i]});
            else enter.push({i, arrival[i]});
        }

        int last = 1, time = -1;
        while(enter.size() || exit.size()){
            auto [index1, arrival1] = enter.size() ? enter.front() : SENTINEL;
            auto [index2, arrival2] = exit.size() ? exit.front() : SENTINEL;
            arrival1 = max(arrival1, time + 1);
            arrival2 = max(arrival2, time + 1);
            if(arrival1 < arrival2 || (arrival1 == arrival2 && time + 1 >= arrival1 && last == 0)){
                answer[index1] = time = max(time + 1, arrival1);
                enter.pop();
                last = 0;
            }
            else{
                answer[index2] = time = max(time + 1, arrival2);
                exit.pop();
                last = 1;
            }
        }
        return answer;
    }
};