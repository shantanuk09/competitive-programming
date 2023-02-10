// LeetCode 279. Perfect Squares
class Solution{
public:
    int numSquares(int n){
        vector<int> arr(n + 1, INT_MAX);
        vector<int> squares;
        arr[0] = 0;
        for(int i = 1; i * i <= n; i++){
            arr[i * i] = 1;
            squares.push_back(i * i);
        }
        for(int i = 2; i <= n; i++){
            for(int j = squares.size() - 1; j >= 0; j--){
                if(i % squares[j] == 0) arr[i] = min(arr[i], i / squares[j]);
                else if(i >= squares[j]) arr[i] = min(arr[i], 1 + arr[i - squares[j]]);
            }
        }
        return arr[n];
    }
};