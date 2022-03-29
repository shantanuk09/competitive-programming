// Codeforces 1215A - Yellow Cards
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1, a2, k1, k2, n1, n2, mn, mx;

    cin >> a1 >> a2 >> k1 >> k2 >> n1;

    n2 = n1;
    if(k1 > k2) swap(a1, a2), swap(k1, k2);

    n1 -= a1 * (k1 - 1) + a2 * (k2 - 1);
    mn = min(max(0, n1), a1 + a2);

    mx = min(a1, n2 / k1);
    n2 = max(0, n2 - mx * k1);
    mx += min(a2, n2 / k2);

    cout << mn << " " << mx << endl;

    return 0;
}
