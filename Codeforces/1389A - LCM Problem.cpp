// Codeforces 1389A - LCM Problem
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, l, r;

	cin >> t;

	while(t--){
		cin >> l >> r;

		if(2 * l > r) cout << "-1 -1" << endl;
		else cout << l << " " << 2 * l << endl;
	}

	return 0;
}