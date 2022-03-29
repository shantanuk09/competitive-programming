// Codeforces 1189B - Number Circle
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
bool found;
int n, arr[SIZE];

int main(){
    found = true;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    sort(arr + 1, arr + n + 1);
    if(arr[n - 1] + arr[n - 2] <= arr[n]) found = false;
    if(found){
        printf("YES\n");
        for(int i = n; i >= 1; i -= 2)
            printf("%d ", arr[i]);
        for(int i = (n % 2) ? 2 : 1; i <= n; i += 2)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else printf("NO\n");

    return 0;
}
