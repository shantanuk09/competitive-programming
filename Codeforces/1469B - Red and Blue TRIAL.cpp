// Codeforces 1469B - Red and Blue TRIAL
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

long long maximumPrefixSum(int l[], int i, int n, int r[], int j, int m);

int main(){
	int t, n, m, r[SIZE], b[SIZE];

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(int i = 0; i < n; i++)
			scanf("%d", &r[i]);

		scanf("%d", &m);

		for(int i = 0; i < m; i++)
			scanf("%d", &b[i]);

		printf("%lld\n", maximumPrefixSum(r, 0, n, b, 0, m));
	}

	return 0;
}

long long maximumPrefixSum(int l[], int i, int n, int r[], int j, int m){
	if(i == n && j == m) return 0;
	if(i == n) return r[j] + maximumPrefixSum(l, n, n, r, j + 1, m);
	if(j == m) return l[i] + maximumPrefixSum(l, i + 1, n, r, m, m);
	return max(l[i] + maximumPrefixSum(l, i + 1, n, r, j, m), r[j] + maximumPrefixSum(l, i, n, r, j + 1, m)); 
}