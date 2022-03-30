// Codeforces 1256A - Payment Without Change
#include <bits/stdc++.h>

using namespace std;

int main(){
	int q, S, a, b, n;

	scanf("%d", &q);

	while(q--){
		scanf("%d %d %d %d", &a, &b, &n, &S);

		if(S - min(S / n, a) * n <= b) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}