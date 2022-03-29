// Codeforces 365B - The Fibonacci Segment
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, arr[SIZE], len, maxLen;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 2; i < n; i++){
        if(arr[i] == arr[i - 1] + arr[i - 2]) len++, maxLen = max(maxLen, len + 2);
        else maxLen = max(maxLen, len + 2), len = 0;
    }
    if(n == 1 || n == 2) printf("%d\n", n);
    else printf("%d\n", maxLen);

    return 0;
}
