// Codeforces 1203A - Circle of Students
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e3 + 5;

int main(){
	int q, n, p[SIZE], inc, dec, maxInc, maxDec;

	cin >> q;

	while(q--){
		inc = 1, dec = 1, maxInc = 0, maxDec = 0;

		cin >> n;

		for(int i = 0; i < n; i++)
			cin >> p[i];

		for(int i = n; i < 2 * n; i++)
			p[i] = p[i - n];

		for(int i = 1; i < 2 * n; i++){
			if(p[i] - p[i - 1] == 1) inc++, maxInc = max(inc, maxInc);
			else maxInc = max(maxInc, inc), inc = 1;

			if(p[i] - p[i - 1] == -1) dec++, maxDec = max(dec, maxDec);
			else maxDec = max(maxDec, dec), dec = 1;
		}

		if(maxInc == n || maxDec == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}