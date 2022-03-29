// Codeforces 137B - Permutation
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e4 + 5;

int main(){
    int n, a, arr[SIZE], c;

    c = 0;
    memset(arr, 0, sizeof(arr));

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        arr[a]++;
    }

    for(int i = 1; i <= n; i++)
        if(!arr[i]) c++;

    printf("%d\n", c);

    return 0;
}
