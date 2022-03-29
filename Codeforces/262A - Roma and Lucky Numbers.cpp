// Codeforces 262A - Roma and Lucky Numbers
#include <bits/stdc++.h>

using namespace std;

int luckyDigits(string s);

int main(){
	int i, n, k, r;
	string s;

	cin >> n >> k;

	for(i = 0, r = 0; i < n; i++){
		cin >> s;

		if(luckyDigits(s) <= k) r++;

		s.clear();
	}

	cout << r << endl;

	return 0;
}

int luckyDigits(string s){
	int i, digits;

	for(i = 0, digits = 0; i < s.size(); i++)
		if(s[i] == '4' || s[i] == '7') ++digits;

	return digits;
}