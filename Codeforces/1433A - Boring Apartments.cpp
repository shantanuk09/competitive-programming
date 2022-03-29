// Codeforces 1433A - Boring Apartments
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, d, len;
	string x;

	cin >> t;

	while(t--){
		cin >> x;

		d = x[0] - '0', len = x.size();

		cout << (d - 1) * 10 + len * (len + 1) / 2 << endl;
	}

	return 0;
}