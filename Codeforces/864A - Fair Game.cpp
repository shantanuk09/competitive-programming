// Codeforces 864A - Fair Game
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
    int n, arr[SIZE];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if(arr[0] == arr[n / 2 - 1] && arr[n / 2] == arr[n - 1] && arr[0] != arr[n - 1]){
        cout << "YES" << endl;
        cout << arr[0] << " " << arr[n - 1] << endl;
    }
    else cout << "NO" << endl;

    return 0;
}
