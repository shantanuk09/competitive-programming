// LeetCode 1063. Number of Valid Subarrays
// Stack based.
class Solution{
public:
    int validSubarrays(vector<int>& nums){
        int count = 0;
        vector<int> st;
        for(auto e : nums){
            while(!st.empty() && e < st.back())
                st.pop_back();
            st.push_back(e);
            count += st.size();
        }
        return count;
    }
};