// Codeforces 1182A - Filling Shapes
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d", &n);

	if(n % 2) printf("0\n");
	else printf("%lld\n", 1ll << (n / 2));

	return 0;
}