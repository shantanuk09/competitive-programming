// Codeforces 1374A - Required Remainder
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, x, y, n;

	cin >> t;

	while(t--){
		cin >> x >> y >> n;

		if(n - n % x + y <= n) cout << n - n % x + y << endl;
		else cout << n - n % x - (x - y) << endl;
	}

	return 0;
}