// Codeforces 1107B - Digital root
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k, x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> k >> x;
        cout << x + 9 * (k - 1) << endl;
    }

    return 0;
}
