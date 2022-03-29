// Codeforces 427B - Prison Transfer
#include <bits/stdc++.h>

using namespace std;

int n, t, c, a, last, w;

int main(){
    scanf("%d %d %d", &n, &t, &c);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
        if(a > t){
            w += max(0, i - last - c);
            last = i;
        }
    }
    w += max(0, n + 1 - last - c);
    printf("%d\n", w);

    return 0;
}
