// Codeforces 1263A - Sweet Problem
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3;
int t, arr[SIZE];

int main(){
    scanf("%d", &t);
    while(t--){
        for(int i = 0; i < SIZE; i++)
            scanf("%d", &arr[i]);
        sort(arr, arr + SIZE);
        if(arr[2] <= arr[0] + arr[1]) printf("%d\n", (arr[0] + arr[1] + arr[2]) / 2);
        else printf("%d\n", arr[0] + arr[1]);
    }
    return 0;
}
