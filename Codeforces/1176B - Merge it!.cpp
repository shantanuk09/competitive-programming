// Codeforces 1176B - Merge it!
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3;
int t, n, e, f, ans, arr[SIZE];

int main(){
    scanf("%d", &t);
    while(t--){
        ans = 0;
        memset(arr, 0, sizeof(arr));
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &e);
            arr[e % 3]++;
        }
        f = min(arr[1], arr[2]);
        ans += f + arr[0];
        arr[1] -= f, arr[2] -= f;
        ans += arr[1] / 3 + arr[2] / 3;
        printf("%d\n", ans);
    }

    return 0;
}
