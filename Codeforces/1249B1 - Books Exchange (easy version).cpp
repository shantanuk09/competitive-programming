// Codeforces 1249B1 - Books Exchange (easy version)
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e2 + 5;

int main(){
	int q, n, child, d, p[SIZE];

	scanf("%d", &q);

	while(q--){
		scanf("%d", &n);

		for(int i = 1; i <= n; i++)
			scanf("%d", &p[i]);

		for(int i = 1; i <= n; i++){
			child = p[i], d = 1;

			while(child != i)
				child = p[child], d++;

			printf("%d ", d);
		}

		printf("\n");
	}

	return 0;
}