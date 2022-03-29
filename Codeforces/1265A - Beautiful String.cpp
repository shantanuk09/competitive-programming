// Codeforces 1265A - Beautiful String
#include <bits/stdc++.h>

using namespace std;

int main(){
	bool flag;
	int t, n;
	string s;

	cin >> t;

	while(t--){
		flag = true;

		cin >> s;

		s = '.' + s + '.';

		for(int i = 1; i < s.size() - 1; i++){
			if(s[i] == '?'){
				if(s[i - 1] != 'a' && s[i + 1] != 'a') s[i] = 'a';
				else if(s[i - 1] != 'b' && s[i + 1] != 'b') s[i] = 'b';
				else if(s[i - 1] != 'c' && s[i + 1] != 'c') s[i] = 'c';
			}

			flag = flag && s[i - 1] != s[i] && s[i] != s[i + 1];
		}

		if(!flag) cout << "-1" << endl;
		else cout << s.substr(1, s.size() - 2) << endl;
	}

	return 0;
}