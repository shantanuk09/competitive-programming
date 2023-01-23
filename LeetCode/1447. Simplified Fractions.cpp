// LeetCode 1447. Simplified Fractions
class Solution{
public:
    vector<string> simplifiedFractions(int n){
        vector<string> answer;
        for(int num = 1; num < n; num++)
            for(int den = num + 1; den <= n; den++)
                if(gcd(num, den) == 1) answer.push_back(to_string(num) + "/" + to_string(den));
        return answer;
    }
};