// Codeforces 1277A - Happy Birthday, Polycarp!
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m, b;

    cin >> t;

    while(t--){
        b = 0;

        cin >> n;

        for(int i = 1; i <= 9; i++){
            m = 0;

            for(int j = 1; j < 10; j++){
                m = 10 * m + i;
                if(m <= n) b++;
            }
        }

        cout << b << endl;

    }
    return 0;
}
