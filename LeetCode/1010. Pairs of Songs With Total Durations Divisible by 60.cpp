// LeetCode 1010. Pairs of Songs With Total Durations Divisible by 60
class Solution{
public:
    int numPairsDivisibleBy60(vector<int>& time){
        int pairs = 0;
        int freq[60] = {};
        for(auto t : time){
            int x = t % 60;
            if(x) pairs += freq[60 - x];
            // If x is 0, 60 - x would be 60, there is no freq[60].
            else pairs += freq[0];
            freq[x]++;
        }
        return pairs;
    }
};