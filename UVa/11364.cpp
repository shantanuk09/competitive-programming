// UVa 11364 - Parking
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int small = INT_MAX;
        int big = INT_MIN;
        int x;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            small = min(small, x);
            big = max(big, x);
        }
        cout << 2 * (big - small) << endl;
    }   

    return 0;
}