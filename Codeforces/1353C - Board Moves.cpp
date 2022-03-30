// Codeforces 1353C - Board Moves
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long n, sum;

	cin >> t;

	while(t--){
		sum = 0;

		cin >> n;

		for(long long i = 3, j = 1; i <= n; i += 2, j++)
			sum += (4 * i - 4) * j;

		cout << sum << endl;
	}

	return 0;
}