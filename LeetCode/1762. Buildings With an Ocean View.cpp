// LeetCode 1762. Buildings With an Ocean View
class Solution{
public:
    vector<int> findBuildings(vector<int>& heights){
        int maxHeight = 0;
        vector<int> index;
        for(int i = heights.size() - 1; i >= 0; i--){
            if(heights[i] > maxHeight) index.push_back(i);
            maxHeight = max(maxHeight, heights[i]);
        }
        reverse(index.begin(), index.end());
        return index;
    }
};