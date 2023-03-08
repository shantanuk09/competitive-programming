// LeetCode 1190. Reverse Substrings Between Each Pair of Parentheses
class Solution{
public:
    string reverseParentheses(string s){
        vector<string> stack = {""};
        for(auto c : s){
            if(isalpha(c)) stack.back() += c;
            else if(c == '(') stack.push_back("");
            else{
                string last = stack.back();
                reverse(last.begin(), last.end());
                stack.pop_back();
                if(stack.size()) stack.back() += last;
                else stack.push_back(last);
            }
        }
        return stack.back();
    }
};