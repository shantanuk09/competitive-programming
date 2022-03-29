// Codeforces 767A - Snacktower
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, e, v, arr[SIZE];

int main(){
    scanf("%d", &n);
    v = n;
    for(int i = 0; i < n; i++){
        scanf("%d", &e);
        arr[e] = 1;
        while(arr[v]){
            printf("%d ", v);
            v--;
        }
        printf("\n");
    }

    return 0;
}
