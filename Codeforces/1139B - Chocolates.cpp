// Codeforces 1139B - Chocolates
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
    long long n, c, choc, arr[SIZE];

    c = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    c = choc = arr[n - 1];

    for(int i = n - 2; i >= 0; i--){
        choc = min(choc - 1, arr[i]);
        c += max(1ll * 0, choc);
    }

    cout << c << endl;

    return 0;
}
