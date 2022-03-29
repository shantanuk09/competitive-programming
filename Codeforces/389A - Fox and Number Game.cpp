// Codeforces 389A - Fox and Number Game
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
    int n, a, f, arr[SIZE];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    f = __gcd(arr[0], arr[1]);

    for(int i = 2; i < n; i++)
        f = __gcd(f, arr[i]);

    cout << n * f << endl;

    return 0;
}
