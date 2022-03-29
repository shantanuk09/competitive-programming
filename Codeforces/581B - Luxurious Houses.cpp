// Codeforces 581B - Luxurious Houses
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, h, arr[SIZE], brr[SIZE];

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    h = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] <= h) brr[i] = h + 1 - arr[i];
        else brr[i] = 0;
        h = max(h, arr[i]);
    }
    for(int i = 0; i < n; i++)
        printf("%d ", brr[i]);
    printf("\n");

    return 0;
}
