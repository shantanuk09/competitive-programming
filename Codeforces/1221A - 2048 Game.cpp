// Codeforces 1221A - 2048 Game
#include <bits/stdc++.h>

using namespace std;

int main(){
	int q, n, s, sum;

	scanf("%d", &q);

	while(q--){
		sum = 0;

		scanf("%d", &n);

		for(int i = 0; i < n; i++){
			scanf("%d", &s);
			if(s <= 2048) sum += s;
		}

		if(sum >= 2048) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}