// Codeforces 58A - Chat room
#include <bits/stdc++.h>

using namespace std;

int main(){
	int v;
	string s;

	v = 0;

	cin >> s;

	for(int i = 0; i < s.size(); i++){
		if(v == 0 && s[i] == 'h') v = 1;
		else if(v == 1 && s[i] == 'e') v = 2;
		else if(v == 2 && s[i] == 'l') v = 3;
		else if(v == 3 && s[i] == 'l') v = 4;
		else if(v == 4 && s[i] == 'o') v = 5;
	}

	if(v == 5) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}