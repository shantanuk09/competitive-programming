// Codeforces 287A - IQ Test
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 4;
int w, b;
char arr[SIZE][SIZE];

int main(){
    for(int i = 0; i < SIZE; i++)
        scanf("%s", &arr[i]);
    for(int i = 0; i <= SIZE - 2; i++){
        for(int j = 0; j <= SIZE - 2; j++){
            w = b = 0;
            if(arr[i][j] == '.') w++;
            else b++;
            if(arr[i + 1][j] == '.') w++;
            else b++;
            if(arr[i][j + 1] == '.') w++;
            else b++;
            if(arr[i + 1][j + 1] == '.') w++;
            else b++;
            if(w == 4 || b == 4 || (w == 3 && b == 1) || (w == 1 && b == 3)) return !printf("YES\n");
        }
    }
    printf("NO\n");

    return 0;
}
