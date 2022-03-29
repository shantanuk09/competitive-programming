// Codeforces 798A - Mike and palindrome
#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string s, int n);

int main(){
	int c, n;
	string s;

	cin >> s;

	n = s.size();
	c = isPalindrome(s, n);

	if(c >= 2) cout << "NO" << endl;
	else if(c == 1) cout << "YES" << endl;
	else if(c == 0 && n % 2) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

int isPalindrome(string s, int n){
	int c;

	c = 0;

	for(int i = 0, j = n - 1; i < j; i++, j--)
		if(s[i] != s[j]) c++;

	return c;
}