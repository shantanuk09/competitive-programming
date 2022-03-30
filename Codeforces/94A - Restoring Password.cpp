// Codeoforces 94A - Restoring Password
#include <bits/stdc++.h>

using namespace std;

int main(){
	string code, s;
	map<string, int> m;

	cin >> code;

	for(int i = 0; i < 10; i++){
		cin >> s;
		m[s] = i;
	}

	for(int i = 0; i < code.size(); i += 10)
		cout << m[code.substr(i, 10)];
	cout << endl;

	return 0;
}