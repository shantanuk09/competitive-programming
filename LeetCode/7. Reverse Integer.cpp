// LeetCode 7. Reverse Integer
class Solution{
public:
    int reverse(int x){
        int pop, rev = 0;
        while(x){
            pop = x % 10;
            x /= 10;
            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = 10 * rev + pop;
        }
        return rev;
    }
};