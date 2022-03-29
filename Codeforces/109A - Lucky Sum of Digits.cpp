// Codeforces 109A - Lucky Sum of Digits
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, f;

    cin >> n;

    f = (n + 3) / 4;

    for(int i = 0; i <= f; i++){
        if((n - 4 * i) % 7 == 0){
            for(int j = 1; j <= i; j++)
                cout << "4";
            for(int j = 1; j <= (n - 4 * i) / 7; j++)
                cout << "7";
            cout << endl;

            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}
