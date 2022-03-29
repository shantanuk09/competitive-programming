// Codeforces 515A - Drazil and Date
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b, s, d;

	scanf("%lld %lld %lld", &a, &b, &s);

	d = abs(a) + abs(b);

	if(s < d || s == d + 1 || (s > d && (s - d) % 2 == 1)) printf("No\n");
	else printf("Yes\n");

	return 0;
}