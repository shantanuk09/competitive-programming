// Codeforces 1399B - Gifts Fixing
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int i, t, n, a[55], b[55], moves, minCandy, minOrange;

	cin >> t;

	while(t--){
		cin >> n;

		for(i = 0, minCandy = INT_MAX; i < n; i++){
			cin >> a[i];

			minCandy = min(minCandy, a[i]);
		}

		for(i = 0, minOrange = INT_MAX; i < n; i++){
			cin >> b[i];
			minOrange = min(minOrange, b[i]);
		}

		for(i = 0, moves = 0; i < n; i++){
			moves += max(a[i] - minCandy, b[i] - minOrange);			
		}
		
		cout << moves << endl;
	}

	return 0;
}