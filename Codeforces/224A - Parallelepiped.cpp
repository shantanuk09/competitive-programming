// Codeforces 224A - Parallelepiped
#include <bits/stdc++.h>

using namespace std;

double p, q, r, a, b, c;

int main(){
    scanf("%lf %lf %lf", &p, &q, &r);
    a = sqrt(p * q / r), b = sqrt(q * r / p), c = sqrt(p * r / q);
    printf("%.0lf\n", 4 * (a + b + c));
    return 0;
}
