// Codeforces 675A - Infinite Sequence
#include <bits/stdc++.h>

using namespace std;

long long a, b, c;

int main(){
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a == b || (c && a + abs((b - a) / c) * c == b)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
