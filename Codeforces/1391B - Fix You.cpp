// Codeforces 1391B - Fix You
#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int t, n, m, f;

	cin >> t;

	while(t--){
		cin >> n >> m;

		f = 0;

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> c;

				if(i == n && c == 'D') f++;
				if(j == m && c == 'R') f++;
			}
		}

		cout << f << endl;
	}

	return 0;
}