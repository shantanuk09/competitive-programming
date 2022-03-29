// Codeforces 1367A - Short Substrings
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, t;
	string b;

	cin >> t;

	while(t--){
		cin >> b;

		cout << b[0];

		for(i = 1; i < b.size(); i += 2)
			cout << b[i];

		if(b.size() % 2) cout << b[b.size() - 1] << endl;
		else cout << endl;
	}

	return 0;
}