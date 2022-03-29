// Codeforces 483A - Counterexample
#include <bits/stdc++.h>

using namespace std;

long long l, r;

int main(){
    scanf("%lld %lld", &l, &r);
    for(long long i = l; i <= r - 2; i++)
        for(long long j = i + 1; j <= r - 1; j++)
            for(long long k = j + 1; k <= r; k++)
                if(__gcd(i, j) == 1 && __gcd(j, k) == 1 && __gcd(i, k) != 1) return printf("%lld %lld %lld\n", i, j, k) * 0;
    printf("-1\n");

    return 0;
}
