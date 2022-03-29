// Codeforces 1015C - Songs Compression
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, m, a, b, arr[SIZE];
long long s;

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        s += a;
        arr[i] = a - b;
    }
    sort(arr, arr + n);
    for(int i = n - 1; i >= 0; i--){
        if(s <= m) return !printf("%d\n", n - i - 1);
        s -= arr[i];
    }
    if(s <= m) printf("%d\n", n);
    else printf("-1\n");

    return 0;
}
