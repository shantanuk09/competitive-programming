// LeetCode 1414. Find the Minimum Number of Fibonacci Numbers Whose Sum Is K
class Solution{
public:
    int findMinFibonacciNumbers(int k){
        long BIG = 1000000000;
        int count = 0;
        vector<long> fib;
        fib.push_back(1);
        fib.push_back(1);
        while(1){
            int n = fib.size();
            fib.push_back(fib[n - 1] + fib[n - 2]);
            if(fib.back() >= BIG) break;
        }
        for(int i = fib.size() - 1; i >= 0; i--){
            if(fib[i] <= k){
                k -= fib[i];
                count++;
            }
            if(k == 0) break;
        }
        return count;
    }
};