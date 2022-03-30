// Codeforces 424A - Squats
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, p, q;
	string s;

	m = 0;

	cin >> n >> s;

	p = count(s.begin(), s.end(), 'x'), q = count(s.begin(), s.end(), 'X');

	for(int i = 0; i < n; i++){
		if(s[i] == 'X' && p < q) s[i] = 'x', p++, q--, m++;
		else if(s[i] == 'x' && p > q) s[i] = 'X', p--, q++, m++;
	}

	cout << m << endl;
	cout << s << endl;

	return 0;
}