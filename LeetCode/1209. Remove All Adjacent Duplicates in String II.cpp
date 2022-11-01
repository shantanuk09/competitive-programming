// LeetCode 1209. Remove All Adjacent Duplicates in String II
// Stack.
class Solution{
public:
    string removeDuplicates(string s, int k){
        string answer;
        vector<pair<int, char>> stack;
        for(int i = 0; i < s.size(); i++){
            if(stack.empty() || s[i] != stack.back().second) stack.push_back({1, s[i]});
            else if(++stack.back().first == k) stack.pop_back();
        }
        for(auto &p : stack)
            answer += string(p.first, p.second);
        return answer;
    }
};