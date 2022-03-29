// Codeforces 1038A - Equality
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, k, minimum;
	string s;
	map<char, int> m;
	map<char, int>::iterator it;

	cin >> n >> k >> s;

	for(i = 0; i < n; i++)
		m[s[i]]++;

	for(it = m.begin(), minimum = INT_MAX; it != m.end(); ++it)
		minimum = min(minimum, it->second);

	if(m.size() == k) cout << minimum * k << endl;
	else cout << "0" << endl;

	return 0;
}