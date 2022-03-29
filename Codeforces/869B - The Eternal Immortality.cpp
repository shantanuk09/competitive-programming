// Codeforces 869B - The Eternal Immortality
#include <bits/stdc++.h>

using namespace std;

int d;
long long a, b;

int main(){
    d = 1;
    scanf("%lld %lld", &a, &b);
    for(long long i = a + 1; i <= b; i++){
        d *= i % 10;
        if(d == 0) break;
        if(d >= 10) d %= 10;
    }
    printf("%d\n", d);

    return 0;
}
