// Codeforces 799A - Carrot Cakes
#include <bits/stdc++.h>

using namespace std;

int n, t, k, d, t1;

int main(){
    scanf("%d %d %d %d", &n, &t, &k, &d);
    while(t1 <= d)
        n -= k, t1 += t;
    if(n > 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
