// Codeforces 1288B - Yet Another Meme Problem
#include <bits/stdc++.h>

using namespace std;

int t, a, b;

int countDigits(int n){
    int d;
    d = 0;
    while(n){
        d++;
        n /= 10;
    }
    return d;
}

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        printf("%lld\n", 1ll * a * (countDigits(b + 1) - 1));
    }

    return 0;
}
