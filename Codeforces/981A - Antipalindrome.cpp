// Codeforces 981A - Antipalindrome
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s);

int main(){
	string s;

	cin >> s;

	while(s.size() > 1 && isPalindrome(s))
		s.pop_back();

	if(s.size() == 1) cout << "0" << endl;
	else cout << s.size() << endl;

	return 0;
}

bool isPalindrome(string s){
	for(int i = 0, j = s.size() - 1; i < j; i++, j--)
		if(s[i] != s[j]) return false;

	return true;
}