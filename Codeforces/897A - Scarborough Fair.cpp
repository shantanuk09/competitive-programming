// Codeforces 897A - Scarborough Fair
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, n, m, l, r;
	char c1, c2;
	string s;

	cin >> n >> m >> s;

	for(i = 0; i < m; i++){
		cin >> l >> r >> c1 >> c2;

		for(j = l - 1; j <= r - 1; j++)
			if(s[j] == c1)
				s[j] = c2;
	}

	cout << s << endl;

	return 0;
}