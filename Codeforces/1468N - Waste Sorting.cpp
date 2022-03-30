// Codeforces 1468N - Waste Sorting
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, c1, c2, c3, a1, a2, a3, a4, a5;

	cin >> t;

	while(t--){
		cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;

		c1 -= a1, c2 -= a2, c3 -= a3 + max(0, a4 - c1) + max(0, a5 - c2);

		if(c1 < 0 || c2 < 0 || c3 < 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}