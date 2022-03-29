// Codeforces 1225B1 - TV Subscriptions (Easy Version)
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
    int t, n, k, d, arr[SIZE], show;
    set<int> s;

    cin >> t;

    while(t--){
        cin >> n >> k >> d;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        show = k;

        for(int i = 0; i <= n - d; i++){
            for(int j = i; j < i + d; j++)
                s.insert(arr[j]);

            show = min(show, (int) s.size());

            s.clear();
        }

        cout << show << endl;
    }

    return 0;
}
