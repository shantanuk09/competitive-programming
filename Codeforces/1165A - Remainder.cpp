// Codeforces 1165A - Remainder
#include <bits/stdc++.h>

using namespace std;

char c;
int n, x, y, v;

int main(){
    scanf("%d %d %d", &n, &x, &y);
    for(int i = 0; i < n; i++){
        cin >> c;
        if(i >= n - x && i == n - y - 1 && c != '1') v++;
        if(i >= n - x && i != n - y - 1 && c != '0') v++;
    }
    printf("%d\n", v);

    return 0;
}
