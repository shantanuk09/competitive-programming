// Codeforces 1421B - Putting Bricks in the Wall
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e2 + 5;
int t, n, p, q, r, s;
char arr[SIZE][SIZE];

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%s", &arr[i]);
        p = arr[0][1] - '0', q = arr[1][0] - '0', r = arr[n - 2][n - 1] - '0', s = arr[n - 1][n - 2] - '0';
        if(p + q == 0 && r + s == 0){
            printf("2\n");
            printf("%d %d\n", n - 1, n);
            printf("%d %d\n", n, n - 1);
        }
        else if(p + q == 0 && r + s == 1){
            printf("1\n");
            if(r == 0) printf("%d %d\n", n - 1, n);
            else printf("%d %d\n", n, n - 1);
        }
        else if(p + q == 0 && r + s == 2) printf("0\n");
        else if(p + q == 1 && r + s == 0){
            printf("1\n");
            if(p == 0) printf("1 2\n");
            else printf("2 1\n");
        }
        else if(p + q == 1 && r + s == 1){
            printf("2\n");
            if(p == 1) printf("1 2\n");
            else printf("2 1\n");
            if(r == 0) printf("%d %d\n", n - 1, n);
            else printf("%d %d\n", n, n - 1);
        }
        else if(p + q == 1 && r + s == 2){
            printf("1\n");
            if(p == 1) printf("1 2\n");
            else printf("2 1\n");
        }
        if(p + q == 2 && r + s == 0) printf("0\n");
        else if(p + q == 2 && r + s == 1){
            printf("1\n");
            if(r == 1) printf("%d %d\n", n - 1, n);
            else printf("%d %d\n", n, n - 1);
        }
        else if(p + q == 2 && r + s == 2){
            printf("2\n");
            printf("1 2\n");
            printf("2 1\n");
        }
    }

    return 0;
}
