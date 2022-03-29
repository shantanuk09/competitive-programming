// Codeforces 227B - Effective Approach
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, m, e, arr[SIZE], brr[SIZE];
long long c1, c2;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &e);
        arr[e] = i + 1;
        brr[e] = n - i;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &e);
        c1 += arr[e], c2 += brr[e];
    }
    printf("%lld %lld\n", c1, c2);

    return 0;
}
