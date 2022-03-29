// Codeforces 990A - Commentary Boxes
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    long long n, m, build, demolish;

    scanf("%lld %lld %d %d", &n, &m, &a, &b);

    build = 1ll * (m - (n % m)) * a,  demolish = 1ll * (n % m) * b;

    printf("%lld\n", min(build, demolish));

    return 0;
}
