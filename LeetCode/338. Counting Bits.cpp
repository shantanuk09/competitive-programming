// LeetCode 338. Counting Bits
// Brian Kernighan Algorithm
class Solution {
public:
    int countSetBits(int n){
        int count = 0;
        while(n)
            n &= (n - 1), count++;
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> vr;
        for(int i = 0; i <= n; i++)
            vr.push_back(countSetBits(i));
        return vr;
    }
};