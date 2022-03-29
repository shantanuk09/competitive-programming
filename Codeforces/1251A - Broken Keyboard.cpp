// Codeforces 1251A - Broken Keyboard
#include <bits/stdc++.h>

using namespace std;

int main(){
	int j, t;
	string s;
	set<char> key;

	cin >> t;

	while(t--){
		j = 0;

		cin >> s;

		for(int i = 0; i < s.size();){
			while(j < s.size() && s[i] == s[j])
				j++; 

			if((j - i) % 2) key.insert(s[i]);

			i = j;
		}

		for(auto it : key)
			cout << it; 
		cout << endl;

		key.clear();
	}

	return 0;
}