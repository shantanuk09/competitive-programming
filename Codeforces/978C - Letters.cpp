// Codeforces 978C - Letters
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
	int n, m, d;
	long long a, b, arr[SIZE];

	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		cin >> a;
		arr[i] = arr[i - 1] + a;
	}

	for(int i = 0; i < m; i++){
		cin >> b;

		d = lower_bound(arr, arr + n + 1, b) - arr;

		printf("%d %lld\n", d, b - arr[d - 1]);
	}

	return 0;
}