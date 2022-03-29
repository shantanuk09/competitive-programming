// Codeforces 672B - Different is Good
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char c;
	set<char> s;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c;
		s.insert(c);
	}

	if(n > 26) cout << "-1" << endl;
	else cout << n - s.size() << endl;

	return 0;
}