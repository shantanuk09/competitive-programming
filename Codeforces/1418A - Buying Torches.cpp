// Codeforces 1418A - Buying Torches
#include <bits/stdc++.h>

using namespace std;

long long trades(int x, int y, int k);

int main(){
	int t, x, y, k;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d", &x, &y, &k);

		printf("%lld\n", trades(x, y, k));
	}

	return 0;
}

long long trades(int x, int y, int k){
	return k + (1ll * k * y + k - 1 + x - 1 - 1) / (x - 1);
}