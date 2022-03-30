// Codeoforces 299B - Ksusha the Squirrel
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, r;
	string s;

	r = 0;

	cin >> n >> k >> s;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == '#') r++;
		else r = 0;

		if(r == k) return printf("NO\n") * 0;
	}

	cout << "YES" << endl;

	return 0;
}