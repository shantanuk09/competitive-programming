// Codeforces 793A - Oleg and shares
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int n, m, k, arr[SIZE];
	long long s;

	m = 1e9 + 5, s = 0;

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> arr[i];

		m = min(m, arr[i]);
	}

	for(int i = 0; i < n; i++){
		if((arr[i] - m) % k != 0) return printf("-1\n") * 0;

		s += (arr[i] - m) / k;		
	}

	cout << s << endl;

	return 0;
}