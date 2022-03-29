// Codeforces 242B - Big Segment
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int n, l[SIZE], r[SIZE], lMin, rMax;

int main(){
    lMin = INT_MAX;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &l[i], &r[i]);
        lMin = min(lMin, l[i]), rMax = max(rMax, r[i]);
    }
    for(int i = 0; i < n; i++)
        if(l[i] <= lMin && rMax <= r[i]) return !printf("%d\n", i + 1);
    printf("-1\n");

    return 0;
}
