// Codeforces 1417B - Two Arrays
#include <bits/stdc++.h>

using namespace std;

int a, t, n, T, p, l;

int main(){
    scanf("%d", &t);
    while(t--){
        l = 0;
        scanf("%d %d", &n, &T);
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            if(T % 2 == 0 && a == T / 2) p = ++l % 2;
            else if(2 * a < T) p = 0;
            else p = 1;
            printf("%d ", p);
        }
        printf("\n");
    }

    return 0;
}
