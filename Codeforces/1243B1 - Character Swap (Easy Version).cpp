// Codeforces 1243B1 - Character Swap (Easy Version)
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	string p, q;
	map<pair<char, char>, int> m;

	cin >> t;

	while(t--){
		cin >> n >> p >> q;

		for(int i = 0; i < n; i++)
			if(p[i] != q[i]) m[{p[i], q[i]}]++;

		if(m.empty()) cout << "Yes" << endl;
		else if(m.size() > 1) cout << "No" << endl;
		else{
			auto p = *m.begin();
			if(p.second == 2) cout << "Yes" << endl;
			else cout << "No" << endl;
		}

		m.clear();
	}

	return 0;
}