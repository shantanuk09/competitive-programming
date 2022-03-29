// Codeforces 672A - Summer Camp
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n;
	string s;

	for(i = 1; s.size() < 1000; i++)
		s += to_string(i);

	cin >> n;

	cout << s[n - 1] << endl;

	return 0;
}