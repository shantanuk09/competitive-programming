// Codeoforces 1140A - Detective Book
#include <bits/stdc++.h>

using namespace std;

const int SIZE  = 1e4 + 5;

int main(){
    int n, arr[SIZE], mx, day;

    mx = 0, day = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    for(int i = 1; i <= n; i++){
        mx = max(mx, arr[i]);
        if(mx == i) day++;
    }

    cout << day << endl;

    return 0;
}
