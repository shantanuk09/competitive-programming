// Codeforces 732B - Cormen --- The Best Friend Of a Man
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int n, k, w, tw, arr[SIZE];

	tw = 0;

	scanf("%d %d", &n, &k);

	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for(int i = 1; i < n; i++){
		w = max(0, k - arr[i] - arr[i - 1]);
		arr[i] += w, tw += w;
	}

	printf("%d\n", tw);

	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}