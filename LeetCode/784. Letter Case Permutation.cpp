// LeetCode 784. Letter Case Permutation
class Solution{
public:
    vector<string> letterCasePermutation(string s){
        vector<string> perms;
        perms.push_back("");
        for(auto c : s){
            int n = perms.size();
            for(int i = 0; i < n; i++){
                if(isalpha(c)){
                    perms[i] += tolower(c);
                    perms.push_back(perms[i]);
                    perms[i].pop_back();
                    perms[i] += toupper(c);
                }
                else perms[i] += c;
            }
        }
        return perms;
    }
};