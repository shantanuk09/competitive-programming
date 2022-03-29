// Codeforces 990A - Commentary Boxes
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, n, g1, g2, g3, g4;

    scanf("%d %d %d %d", &a, &b, &c, &n);

    g1 = a - c, g2 = b - c, g3 = c, g4 = n - g1 - g2 - g3;

    if(g1 >= 0 && g2 >= 0 && g3 >= 0 && g4 > 0) printf("%d\n", g4);
    else printf("-1\n");

    return 0;
}
