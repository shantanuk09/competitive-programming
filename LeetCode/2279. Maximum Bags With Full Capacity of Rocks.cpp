// LeetCode 2279. Maximum Bags With Full Capacity of Rocks
class Solution{
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks){
        int bags = 0;
        for(int i = 0; i < rocks.size(); i++)
            rocks[i] = capacity[i] - rocks[i];
        sort(rocks.begin(), rocks.end());
        for(int i = 0; i < rocks.size(); i++){
            if(additionalRocks >= rocks[i]){
                bags++;
                additionalRocks -= rocks[i];
            }
            else break;
        }
        return bags;
    }
};