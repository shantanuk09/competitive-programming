// Codeforces 1300B - Assigning to Classes
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
	int t, n, arr[SIZE];

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(int i = 0; i < 2 * n; i++)
			scanf("%d", &arr[i]);

		sort(arr, arr + 2 * n);

		printf("%d\n", arr[n] - arr[n - 1]);
	}

	return 0;
}

// 1 2 3 4 5 6