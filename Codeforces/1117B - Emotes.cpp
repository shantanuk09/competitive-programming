// Codeforces 1117B - Emotes
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
    long long n, m, k, arr[SIZE], h;

    h = 0;

    cin >> n >> m >> k;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    h += (m / (k + 1)) * (k * arr[n - 1] + arr[n - 2]);
    m %= (k + 1);
    h += m * arr[n - 1];

    cout << h << endl;

    return 0;
}
