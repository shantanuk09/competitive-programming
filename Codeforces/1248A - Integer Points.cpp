// Codeforces 1248A - Integer Points
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m, p, q;
	long long pOdd, pEven, qOdd, qEven;

	cin >> t;

	while(t--){
		pOdd = pEven = qOdd = qEven = 0;

		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> p;

			if(p % 2) pOdd++;
			else pEven++;
		}

		cin >> m;

		for(int i = 0; i < m; i++){
			cin >> q;

			if(q % 2) qOdd++;
			else qEven++;
		}

		cout << pOdd * qOdd + pEven * qEven << endl;
	}

	return 0;
}