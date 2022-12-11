// LeetCode 621. Task Scheduler
// Math.
class Solution{
public:
    int leastInterval(vector<char>& tasks, int n){
        int frequencies[26] = {0};
        for(int t : tasks)
            frequencies[t - 'A']++;
        sort(frequencies, frequencies + 26);
        int f_max = frequencies[25];
        int idleTime = (f_max - 1) * n;
        for(int i = 24; i >= 0; i--)
            idleTime -= min(f_max - 1, frequencies[i]);
        idleTime = max(0, idleTime);
        return idleTime + tasks.size();
    }
};
