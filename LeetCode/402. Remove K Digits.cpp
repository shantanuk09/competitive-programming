// LeetCode 402. Remove K Digits
// Greedy Stack.
class Solution{
public:
    string removeKdigits(string num, int k){
        bool leadingZero = true;
        string number;
        vector<char> stack;
        for(auto digit : num){
            while(stack.size() && k > 0 && stack.back() > digit){
                stack.pop_back();
                k--;
            }
            stack.push_back(digit);
        }
        for(int i = 0; i < k; i++)
            stack.pop_back();
        for(char digit : stack){
            if(leadingZero && digit == '0') continue;
            leadingZero = false;
            number += digit;
        }
        if(number.length()) return number;
        else return "0";
    }
};