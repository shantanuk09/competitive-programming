// LeetCode 371. Sum of Two Integers
// Bit Manipulation
class Solution{
public:
    int getSum(int a, int b){
        unsigned carry;
        while(b){
						// a&b represents the carry.
            carry = a&b;
						// a^b is addition without carry.
            a ^= b;
            b = (carry << 1);
        }
        return a;
    }
};