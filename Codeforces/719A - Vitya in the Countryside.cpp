// Codeforces 719A - Vitya in the Countryside
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;
int n, arr[SIZE];

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if(arr[n - 1] == 0) printf("UP\n");
    else if(arr[n - 1] == 15) printf("DOWN\n");
    else if(n == 1) printf("-1\n");
    else if(arr[n - 2] < arr[n - 1]) printf("UP\n");
    else printf("DOWN\n");

    return 0;
}
