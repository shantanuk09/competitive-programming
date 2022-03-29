// Codeforces 1426A - Floor Number
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, x;

	cin >> t;

	while(t--){
		cin >> n >> x;

		if(n <= 2) cout << "1" << endl;
		else cout << ceil(1.0 * (n - 2) / x) + 1 << endl;
	}

	return 0;
}