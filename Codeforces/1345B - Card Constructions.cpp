// Codeforces 1345B - Card Constructions
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5, BIG = 1e9;
int t, n, N, p, arr[SIZE];

void initialise(){
    arr[0] = 0, arr[1] = 2;
    for(int i = 2; ; i++){
        arr[i] = arr[i - 1] + 3 * i - 1;
        if(arr[i] > BIG){
            N = i;
            return;
        }
    }
}

int binarySearch(int n){
    int low, mid, high;
    low = 0, high = N;
    while(low < high){
        mid = low + (high - low) / 2 + 1;
        if(n < arr[mid]) high = mid - 1;
        else low = mid;
    }
    return arr[low];
}

int main(){
    initialise();
    cin >> t;
    while(t--){
        p = 0;
        cin >> n;
        while(n >= arr[1]){
            n -= binarySearch(n);
            p++;
        }
        cout << p << endl;
    }
    return 0;
}
