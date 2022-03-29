// Codeforces 1223B - Strings Equalization
#include <bits/stdc++.h>

using namespace std;

int main(){
	int q;
	string s, t;
	bool found;

	cin >> q;

	while(q--){
		found = false;

		cin >> s >> t;

		for(int i = 0; i < s.size(); i++)
			if(find(t.begin(), t.end(), s[i]) != t.end()) found = true;
	
		if(found) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}