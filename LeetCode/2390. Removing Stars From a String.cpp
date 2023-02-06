// LeetCode 2390. Removing Stars From a String
class Solution{
public:
    string removeStars(string s){
        string answer;
        stack<char> st;
        for(auto c : s){
            if(c == '*') st.pop();
            else st.push(c);
        }
        while(st.size()){
            answer += st.top();
            st.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};