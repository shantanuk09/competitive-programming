// LeetCode 2391. Minimum Amount of Time to Collect Garbage
class Solution{
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel){
        int metal = -1;
        int paper = -1;
        int glass = -1;
        int time = 0;
        for(int i = 0; i < garbage.size(); i++){
            for(int j = 0; j < garbage[i].size(); j++){
                if(garbage[i][j] == 'M') metal = i;
                else if(garbage[i][j] == 'P') paper = i;
                else glass = i;
            }
        }
        for(int i = 0; i <= metal; i++){
            if(i != 0) time += travel[i - 1];
            time += count(garbage[i].begin(), garbage[i].end(), 'M');
        }
        for(int i = 0; i <= paper; i++){
            if(i != 0) time += travel[i - 1];
            time += count(garbage[i].begin(), garbage[i].end(), 'P');
        }
        for(int i = 0; i <= glass; i++){
            if(i != 0) time += travel[i - 1];
            time += count(garbage[i].begin(), garbage[i].end(), 'G');
        }
        return time;
    }
};