// Codeforces 339B - Xenia and Ringroad
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x, a;
	long long t;

	x = 1, t = 0;

	scanf("%d %d", &n, &m);

	for(int i = 0; i < m; i++){
		scanf("%d", &a);

		if(a >= x) t += a - x;
		else t += n - x + a; 

		x = a;
	}

	printf("%lld\n", t);

	return 0;
}