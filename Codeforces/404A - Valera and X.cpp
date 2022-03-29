// Codeforces 404A - Valera and X
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char c, d, nd;
	bool x;

	x = true;

	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c;

			if(i == 1 && j == 1) d = c;
			if(i == 1 && j == 2) nd = c;
			if(d == nd) x = false;
			if((i == j || i + j == n + 1) && c != d) x = false;
			if(i != j && i + j != n + 1 && c != nd) x = false;
		}
	}

	if(x) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}