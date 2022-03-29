// Codeforces 1244B - Rooms and Staircases
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, r;
	string s;

	cin >> t;

	while(t--){
		r = 0;

		cin >> n >> s;

		for(int i = 0; i < n; i++)
			if(s[i] == '1') r = max(r, max(2 * (i + 1), 2 * (n - i)));

		cout << max(r, n) << endl;
	}

	return 0;
}