// LeetCode 2358. Maximum Number of Groups Entering a Competition
class Solution{
public:
    int maximumGroups(vector<int>& grades){
        int n = grades.size();
        int group = 1;
        while(group * (group + 1) / 2 <= n)
            group++;
        return group - 1;
    }
};