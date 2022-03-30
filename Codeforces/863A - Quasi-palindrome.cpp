// Codeforces 863A - Quasi-palindrome
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, p;

	cin >> s;

	while(!s.empty() && s.back() == '0')
		s.pop_back();

	if(equal(s.begin(), s.end(), s.rbegin())) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}