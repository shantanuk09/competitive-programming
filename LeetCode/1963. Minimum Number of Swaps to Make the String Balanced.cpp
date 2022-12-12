// LeetCode 1963. Minimum Number of Swaps to Make the String Balanced
// Modify the commonly used algorithm for checking if a string is balanced.
class Solution{
public:
    int minSwaps(string s){
        stack<char> st;
        for(auto c : s){
            if(c == '[') st.push(c);
            else if(c == ']' && st.size() > 0 && st.top() == '[') st.pop();
        }
        return (st.size() % 2 == 0) ? st.size() / 2 : (st.size() + 1) / 2;
    }
};
