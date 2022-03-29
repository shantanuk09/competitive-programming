// Codeforces 1312B - Bogosort
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int t, n, arr[SIZE];

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(int i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		sort(arr, arr + n);

		for(int i = n - 1; i >= 0; i--)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}