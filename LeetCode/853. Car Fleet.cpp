// LeetCode 853. Car Fleet
class Solution{
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed){
        int count = 0;
        double current = 0;
        map<int, double> mp;
        for(int i = 0; i < position.size(); i++)
            mp[-position[i]] = (double) (target - position[i]) / speed[i];
        for(auto it : mp)
            if(it.second > current) current = it.second, count++;
        return count;
    }
};