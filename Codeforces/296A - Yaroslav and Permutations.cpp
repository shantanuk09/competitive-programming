// Codeforces 296A - Yaroslav and Permutations
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;
int a, n, arr[SIZE];

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        arr[a]++;
    }
    for(int i = 0; i < SIZE; i++)
        if(arr[i] > (n + 1) / 2) return !printf("NO\n");
    printf("YES\n");

    return 0;
}
