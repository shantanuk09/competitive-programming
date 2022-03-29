// Codeforces 1405B - Array Cancellation
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

long long maximumSuffixSum(int arr[], int n);

int main(){
	int t, n, arr[SIZE];

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(int i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		printf("%lld\n", maximumSuffixSum(arr, n));
	}

	return 0;
}

long long maximumSuffixSum(int arr[], int n){
	long long sum, suffixSum;

	sum = 0, suffixSum = -1;

	for(int i = n - 1; i >= 0; i--){
		sum += arr[i];
		suffixSum = max(suffixSum, sum);
	}

	return suffixSum;
}