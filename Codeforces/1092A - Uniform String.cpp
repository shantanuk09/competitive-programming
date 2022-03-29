// Codeforces 1092A - Uniform String
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, t, n, k;
	string s;

	cin >> t;

	while(t--){
		cin >> n >> k;

		for(i = 0, j = 0; i < n; i++){
			s.push_back('a' + j);
			j = (j + 1) % k;
		}

		cout << s << endl;

		s.clear();
	}

	return 0;
}