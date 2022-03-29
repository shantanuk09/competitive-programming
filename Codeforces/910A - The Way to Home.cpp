// Codeforces 910A - The Way to Home
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;
bool brr[SIZE];
int n, d, arr[SIZE];
string s;

bool __DFS(int p, int j){
    brr[p] = true;
    if(p == n - 1){
        arr[p] = j;
        return true;
    }
    for(int i = d; i >= 1; i--)
        if(p + i < n && s[p + i] == '1' && !brr[p + i] && __DFS(p + i, j + 1)) return true;
    return false;
}

int main(){
    arr[0] = 0;
    scanf("%d %d", &n, &d);
    cin >> s;
    if(__DFS(0, 0)) printf("%d\n", arr[n - 1]);
    else printf("-1\n");

    return 0;
}
