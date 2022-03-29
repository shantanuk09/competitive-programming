// Codeforces 1153A - Serval and Bus
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, s, d, bus, mn = INT_MAX;

    cin >> n >> t;

    for(int i = 0; i < n; i++){
        cin >> s >> d;

        while(s < t) s += d;
        if(mn > s) mn = s, bus = i + 1;
    }

    cout << bus << endl;

    return 0;
}
