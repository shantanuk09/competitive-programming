// Codeforces 1195B - Sport Mafia
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;

	cin >> n >> k;

	if(n == 1 && k == 1) return printf("0\n") * 0;

	for(long long i = 1; i <= n; i++)
		if(i * (i + 1) / 2 - n + i == k) return printf("%lld\n", n - i) * 0;

	return 0;
}