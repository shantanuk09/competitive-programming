// 2028. Find Missing Observations
// Implementation.
class Solution{
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n){
        int sum = 0;
        int m = rolls.size();
        vector<int> vr;
        for(auto &roll : rolls)
            sum += roll;
        int requiredSum = mean * (n + m) - sum;
        // Each roll must be between 1 & 6.
        if(requiredSum < n || requiredSum > 6 * n) return {};
        while(n && requiredSum > 0){
            int element = requiredSum / n;
            requiredSum -= element;
            n--;
            vr.push_back(element);
        }
        if(requiredSum == 0) return vr;
        else return {};
    }
};
