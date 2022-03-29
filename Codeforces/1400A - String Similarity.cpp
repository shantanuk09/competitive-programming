// Codeforces 1400A - String Similarity
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	string s, v, w;

	cin >> t;

	while(t--){
		cin >> n >> s;

		for(int i = 0; i < n; i++){
			v = s.substr(i, n);
			w.push_back(v[i]);
		}

		cout << w << endl;

		w.clear();
	}

	return 0;
}