// Codeforces 1419D1 - Sage's Birthday (easy version)
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int j, n, c, arr1[SIZE], arr2[SIZE];

	j = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
		arr2[i] = arr1[i];
	}

	printf("%d\n", (n - 1) / 2);

	sort(arr1, arr1 + n);

	for(int i = 1; i < n; i += 2)
		arr2[i] = arr1[j++];

	for(int i = 0; i < n; i += 2)
		arr2[i] = arr1[j++];

	for(int i = 0; i < n; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	return 0;
}