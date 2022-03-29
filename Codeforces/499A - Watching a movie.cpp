// Codeforces 499A - Watching a movie
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
    int n, x, l[SIZE], r[SIZE], m;

    m = l[0] = 0, r[0] = 0;

    cin >> n >> x;

    for(int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];

    for(int i = 1; i <= n; i++)
        m += (r[i] - l[i] + 1) + ((l[i] - r[i - 1] - 1) % x);

    cout << m << endl;

    return 0;
}
