// Codeforces 1030B - Vasya and Cornfield
#include <bits/stdc++.h>

using namespace std;

int n, d, m, x, y;

bool insideField(int n, int d, int x, int y){
    if(d <= x + y && x + y <= 2 * n - d && -d <= x - y && x - y <= d) return true;
    else return false;
}

int main(){
    scanf("%d %d %d", &n, &d, &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &x, &y);
        if(insideField(n, d, x, y)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
