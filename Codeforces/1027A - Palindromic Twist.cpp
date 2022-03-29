// Codeforces 1027A - Palindromic Twist
#include <bits/stdc++.h>

using namespace std;

bool twistPossible(string s, int n);

int main(){
	int t, n;
	string s;

	cin >> t;

	while(t--){
		cin >> n >> s;

		if(twistPossible(s, n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}

bool twistPossible(string s, int n){
	for(int i = 0, j = n - 1; i < j; i++, j--)
		if(abs(s[i] - s[j]) != 0 && abs(s[i] - s[j]) != 2) return false;

	return true;
}