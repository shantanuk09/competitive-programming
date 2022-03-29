// Codeforces 1260A - Heating
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c, sum, d, rem;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> c >> sum;

        d = sum / c;
        rem = sum % c;

        cout << rem * (d + 1) * (d + 1) + (c - rem) * d * d << endl;
    }

    return 0;
}
