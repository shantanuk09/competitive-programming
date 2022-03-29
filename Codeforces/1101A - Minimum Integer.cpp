// Codeforces 1101A - Minimum Integer
#include <bits/stdc++.h>

using namespace std;

int main(){
	int q;
	long long l, r, d;

	cin >> q;

	while(q--){
		cin >> l >> r >> d;

		if(d < l) cout << d << endl;
		else if(r % d == 0) cout << r + d << endl;
		else cout << d * ((r + d - 1) / d) << endl;
	}

	return 0;
}