// Codeforces 1041B - Buying a TV Set
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, x, y, z, w, h, tv;

    cin >> a >> b >> x >> y;

    z = __gcd(x, y);
    x /= z, y /= z;
    tv = min(a / x, b / y);

    cout << tv << endl;

    return 0;
}
