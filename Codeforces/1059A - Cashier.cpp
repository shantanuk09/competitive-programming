// Codeforces 1059A - Cashier
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, L, a, t, l, start, b;

    start = 0, b = 0;

    scanf("%d %d %d", &n, &L, &a);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &t, &l);

        b += (t - start) / a;
        start = t + l;
    }

    b += (L - start) / a;

    printf("%d\n", b);

    return 0;
}
