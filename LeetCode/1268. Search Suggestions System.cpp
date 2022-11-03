// LeetCode 1268. Search Suggestions System
// Binary Search.
class Solution{
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord){
        sort(products.begin(), products.end());
        string current;
        vector<vector<string>> vr;
        for(auto c : searchWord){
            vector<string> words;
            current += c;
            auto it = lower_bound(products.begin(), products.end(), current);
            for(int i = 0; i < 3 && it + i != products.end(); i++){
                string& s = *(it + i);
                if(s.find(current)) break;
                words.push_back(s);
            }
            vr.push_back(words);
        }
        return vr;
    }
};