// Codeforces 1368A - C+=
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int t, a, b, n, operations;

	cin >> t;

	while(t--){
		cin >> a >> b >> n;

		operations = 0;

		while(max(a, b) <= n){
			if(a > b) b += a;
			else a += b;

			operations++;
		}

		cout << operations << endl;
	}

	return 0;
}