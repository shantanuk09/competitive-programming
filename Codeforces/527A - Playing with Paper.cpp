// Codeforces 527A - Playing with Paper
#include <bits/stdc++.h>

using namespace std;

long long a, b, ship;

int main(){
    scanf("%lld %lld", &a, &b);
    if(a < b) swap(a, b);
    while(a && b && a != b){
        ship += a / b;
        a %= b;
        if(a < b) swap(a, b);
    }
    printf("%lld\n", ship);

    return 0;
}
