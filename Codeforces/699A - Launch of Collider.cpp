// Codeforces 699A - Launch of Collider
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
    bool collision;
    int n, arr[SIZE], t;
    string s;

    collision = false, t = 1e9 + 5;

    cin >> n >> s;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 1; i < n; i++)
        if(s[i - 1] == 'R' && s[i] == 'L') collision = true, t = min(t, (arr[i] - arr[i - 1]) / 2);

    if(collision) cout << t << endl;
    else cout << "-1" << endl;

    return 0;
}
