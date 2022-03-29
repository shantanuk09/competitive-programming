// Codeforces 1426C - Increase and Copy
#include <bits/stdc++.h>

using namespace std;

const int BIG = 1e9;
int t, n, moves;

int main(){
    scanf("%d", &t);
    while(t--){
        moves = BIG;
        scanf("%d", &n);
        for(int i = 1; i * i <= n; i++)
            moves = min(moves, (i - 1) + (n - 1) / i);
        printf("%d\n", moves);
    }

    return 0;
}
