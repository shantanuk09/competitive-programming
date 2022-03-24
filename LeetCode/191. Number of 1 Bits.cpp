// LeetCode 191. Number of 1 Bits
// Bit Manipulation
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            count += n&1;
            n >>= 1;
        }
        return count;
    }
};

// Recursive
class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n == 0) return 0;
        else return (n&1) + hammingWeight(n >> 1);
    }
};

// Brian Kernighan Algorithm
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            n &= (n - 1);
            count++;
        }
        return count;
    }
};