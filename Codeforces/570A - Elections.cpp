// Codeforces 570A - Elections
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;
int n, m, v, c, maxV, w, arr[SIZE];

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        maxV = -1;
        for(int j = 0; j < n; j++){
            scanf("%d", &v);
            if(v > maxV) c = j + 1, maxV = v;
        }
        arr[c]++;
    }
    for(int i = 1; i <= n; i++)
        if(arr[i] > w) c = i, w = arr[i];
    printf("%d\n", c);

    return 0;
}
