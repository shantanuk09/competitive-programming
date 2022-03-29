// Codeforces 1221B - Knights
#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + j)&1) printf("W");
            else printf("B");
        }
        printf("\n");
    }

    return 0;
}
