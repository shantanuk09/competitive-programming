// Codeforces 682A - Alyona and Numbers
#include <bits/stdc++.h>

using namespace std;

int n, m;
long long p;
map<int, int> mp1, mp2;

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
        mp1[i % 5]++;
    for(int i = 1; i <= m; i++)
        mp2[i % 5]++;
    for(auto it1 : mp1)
        for(auto it2 : mp2)
            if((it1.first + it2.first) % 5 == 0) p += 1ll * it1.second * it2.second;
    printf("%lld\n", p);

    return 0;
}
