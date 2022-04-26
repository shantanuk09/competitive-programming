// UVa 11364 - Parking
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t, n, p, l, r;
    cin >> t;
    while(t--){
        l = INT_MAX, r = INT_MIN;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> p;
            l = min(l, p);
            r = max(r, p);
        }
        cout << 2 * (r - l) << endl;
    }

    return 0;
}