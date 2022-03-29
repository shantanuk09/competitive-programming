// Codeforces 114A - Cifera
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long k, l, i;

    i = 0;

    cin >> k >> l;

    while(l > k && l % k == 0)
        l /= k, i++;

    if(k == l) cout << "YES\n" << i << endl;
    else cout << "NO" << endl;

    return 0;
}
