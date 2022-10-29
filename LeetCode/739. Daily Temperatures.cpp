// LeetCode 739. Daily Temperatures
// Monotonic Stack.
class Solution{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
        int index;
        vector<int> vr(temperatures.size(), 0), stack;
        for(int i = 0; i < temperatures.size(); i++){
            while(stack.size() && temperatures[stack.back()] < temperatures[i]){
                index = stack.back(), stack.pop_back();
                vr[index] = i - index;
            }
            stack.push_back(i);
        }
        return vr;
    }
};