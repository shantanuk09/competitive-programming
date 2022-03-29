// Codeforces 583A - Asphalting Roads
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 55;

int main(){
    int n, arr1[SIZE], arr2[SIZE], h, v;

    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));

    cin >> n;

    for(int i = 0; i < n * n; i++){
        cin >> h >> v;

        if(!arr1[h] && !arr2[v]){
            arr1[h] = 1, arr2[v] = 1;
            cout << i + 1 << " ";
        }
    }

    cout << endl;;

    return 0;
}
