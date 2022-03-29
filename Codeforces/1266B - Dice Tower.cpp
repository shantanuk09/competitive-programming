// Codeforces 1266B - Dice Tower
#include <bits/stdc++.h>

using namespace std;

int main(){
    bool found;
    int t;
    long long n;

    cin >> t;

    while(t--){
        found = false;

        cin >> n;

        if(n > 20) n = (n % 14) + 14;

        for(int i = 15; i <= 20; i++)
            if(n % i == 0) found = true;

        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
