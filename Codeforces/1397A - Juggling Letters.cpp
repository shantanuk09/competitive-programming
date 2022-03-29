// Codeforces 1397A - Juggling Letters
#include <bits/stdc++.h>

using namespace std;

int main(){
	bool flag;
	int n, t;
	string s;
	map<char, int> m;

	cin >> t;

	while(t--){
		cin >> n;

		flag = true;

		for(int i = 0; i < n; i++){
			cin >> s;

			for(auto c : s)
				m[c]++;
		}

		for(auto it : m)
			if(it.second % n) flag = false;

		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;

		m.clear();
	}

	return 0;
}