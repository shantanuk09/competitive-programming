// Codeforces 1155A - Reverse a Substring
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    for(int i = 1; i < n; i++){
        if(s[i - 1] > s[i]){
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
