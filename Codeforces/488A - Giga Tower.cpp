// Codeforces 488A - Giga Tower
#include <bits/stdc++.h>

using namespace std;

long long a;

bool isLucky(long long n){
    if(n < 0) n = -n;
    while(n){
        if(n % 10 == 8) return true;
        n /= 10;
    }
    return false;
}

int main(){
    scanf("%lld", &a);
    for(long long i = a + 1; ; i++)
        if(isLucky(i)) return !printf("%lld\n", i - a);
}
