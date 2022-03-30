// Codeforces 1267B - Balls of Buma
#include <bits/stdc++.h>

using namespace std;

int main(){
	int l, r, c;
	string s;

	cin >> s;

	l = 0, r = s.size() - 1;

	while(1){
		if(s[l] != s[r]) return printf("0\n") * 0;

		c = 0;

		while(s[l] == s[r] && l < r)
			l++, c++;

		if(l == r && c >= 1) return printf("%d\n", c + 2) * 0;
		else if(l == r) return printf("0\n") * 0;

		while(s[r] == s[l - 1])
			r--, c++;

		if(c <= 2) return printf("0\n") * 0;
	}

	return 0;
}