// LeetCode 50. Pow(x, n)
// Binary Exponentiation
class Solution{
public:
    double exponent(double x, unsigned int n){
        if(n == 0) return 1.0;
        double answer = myPow(x, n / 2);
        if(n % 2) return x * answer * answer;
        else return answer * answer;
    }
    double myPow(double x, int n){
        long long N = n;
        return (N < 0) ? exponent(1 / x, -N) : exponent(x, N);
    }
};