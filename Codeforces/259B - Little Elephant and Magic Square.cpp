// Codeforces 259B - Little Elephant and Magic Square
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3, BIG = 1e5;
int arr[SIZE][SIZE], r1, r2, r3, c1, c2, c3, d1, d2, j, k;

int main(){
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &arr[i][j]);
    for(int i = 1; i <= BIG; i++){
        j = i + arr[0][1] + arr[0][2] - arr[1][0] - arr[1][2];
        k = i + arr[0][1] + arr[0][2] - arr[2][0] - arr[2][1];
        r1 = i + arr[0][1] + arr[0][2];
        r2 = arr[1][0] + j + arr[1][2];
        r3 = arr[2][0] + arr[2][1] + k;
        c1 = i + arr[1][0] + arr[2][0];
        c2 = arr[0][1] + j + arr[2][1];
        c3 = arr[0][2] + arr[1][2] + k;
        d1 = i + j + k;
        d2 = arr[2][0] + j + arr[0][2];
        if(r1 == r2 && r1 == r3 && r1 == c1 && r1 == c2 && r1 == c3 && r1 == d1 && r1 == d2){
            arr[0][0] = i, arr[1][1] = j, arr[2][2] = k;
            for(int p = 0; p < SIZE; p++){
                for(int q = 0; q < SIZE; q++)
                    printf("%d ", arr[p][q]);
                printf("\n");
            }

            return 0;
        }
    }
}
