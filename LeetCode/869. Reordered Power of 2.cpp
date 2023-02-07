// LeetCode 869. Reordered Power of 2
class Solution{
public:
    bool isPowerOfTwo(int n){
        cout << "n = " << n << endl;
        return (n != 0) && (n & (n - 1)) == 0;
    }
    bool reorderedPowerOf2(int n){
        string current = to_string(n);
        sort(current.begin(), current.end());
        do{
            if(current[0] != '0' && isPowerOfTwo(stoi(current))) return true;
        } while(next_permutation(current.begin(), current.end()));
            
        return false;
    }
};

// Alternate
class Solution{
public:
    bool isReordering(int n, int *arr){
        int digits[10] = {0};
        while(n){
            digits[n % 10]++;
            n /= 10;
        }
        for(int i = 0; i < 10; i++)
            if(digits[i] != arr[i]) return false;
        return true;
    }

    bool reorderedPowerOf2(int n){
        long BIG = 1e9;
        int arr[10] = {0};
        long power = 1;
        while(n){
            arr[n % 10]++;
            n /= 10;
        }
        while(power <= BIG){
            if(isReordering(power, arr)) return true;
            power <<= 1;
        }
        return false;
    }
};