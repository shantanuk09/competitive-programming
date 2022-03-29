// Codeforces 1136B - Nastya Is Playing Computer Games
#include <bits/stdc++.h>

using namespace std;

int n, k;

int main(){
    scanf("%d %d", &n, &k);

    // 2 + min(max(0, k - 1), n - k) + 4 + 3 * (n - 2)
    printf("%d\n", min(max(0, k - 1), n - k) + 3 * n);

    return 0;
}
