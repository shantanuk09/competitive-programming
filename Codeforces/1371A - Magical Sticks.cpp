// Codeforces 1371A - Magical Sticks
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;

	cin >> t;

	while(t--){
		cin >> n;

		if(n % 2) cout << (n + 1) / 2  << endl;
		else cout << n / 2 << endl;
	}

	return 0;
}