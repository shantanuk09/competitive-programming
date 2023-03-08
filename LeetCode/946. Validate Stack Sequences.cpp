// LeetCode 946. Validate Stack Sequences
class Solution{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped){
        vector<int> stack;
        int popIndex = 0;
        for(int pushIndex = 0; pushIndex < pushed.size(); pushIndex++){
            stack.push_back(pushed[pushIndex]);
            while(stack.size() && stack.back() == popped[popIndex]){
                stack.pop_back();
                popIndex++;
            }
        }
        return stack.size() == 0;
    }
};