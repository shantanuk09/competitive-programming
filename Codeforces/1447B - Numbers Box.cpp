// Codeforces 1447B - Numbers Box
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 15;

int main(){
    int t, n, m, a, neg, sum, small;

    cin >> t;

    while(t--){
        neg = 0, sum = 0, small = 105;

        cin >> n >> m;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a;

                small = min(small, abs(a));
                sum += abs(a);
                if(a < 0) neg++;
            }
        }

        if(neg % 2) sum -= 2 * small;

        cout << sum << endl;
    }
    return 0;
}
