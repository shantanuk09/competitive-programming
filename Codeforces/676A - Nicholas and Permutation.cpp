// Codeforces 676A - Nicholas and Permutation
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, a, position1, positionn;

	cin >> n;

	for(i = 1; i <= n; i++){
		cin >> a;
		if(a == 1) position1 = i;
		if(a == n) positionn = i;
	}

	cout << max(max(position1, positionn) - 1, n - min(position1, positionn)) << endl;

	return 0;
}