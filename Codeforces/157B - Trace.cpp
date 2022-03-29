// Codeforces 157B - Trace
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;
const double PI = 3.14159265358979323846;

int main(){
    int n, sign, r[SIZE];
    double red;

    red = 0.00, sign = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &r[i]);

    sort(r, r + n);

    for(int i = n - 1; i >= 0; i--){
        red += (double) PI * r[i] * r[i] * sign;
        sign *= -1;
    }

    printf("%.10lf\n", red);

    return 0;
}
