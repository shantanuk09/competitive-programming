// Codeforces 1382A - Common Subsequence
#include <bits/stdc++.h>

using namespace std;

const int SIZE  = 1005;

int main(){
	bool flag;
	int t, n, m, e, a[SIZE], b[SIZE];

	cin >> t;

	while(t--){
		cin >> n >> m;

		flag = false;

		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];

		sort(a, a + n), sort(b, b + m);

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] < b[j]) break;
				else if(a[i] == b[j]) flag = true, e = a[i];
			}
		}

		if(flag){
			cout << "YES" << endl;
			cout << "1 " << e << endl;
		}
		else cout << "NO" << endl;
	}

	return 0;
}