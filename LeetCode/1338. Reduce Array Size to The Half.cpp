// LeetCode 1338. Reduce Array Size to The Half
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int f[100005] = {}, len = arr.size(), size = 0;
        vector<int> frequency;
        // Count the frequency of each character.
        for(auto e : arr)
            f[e]++;
        // We are only concerned with the value of the frequency and not the element itself.
        for(auto e : f)
            if(e > 0) frequency.push_back(e);
        // Sort  the frequency values.
        sort(frequency.begin(), frequency.end());
        // Remove the largest frequency and check if len <= arr.size() / 2. 
        for(int i = frequency.size() - 1; i >= 0; i--){
            len -= frequency[i], size++;
            if(len <= arr.size() / 2) break;
        }
        return size;
    }
};