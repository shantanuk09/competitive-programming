// Codeforces 376A - Lever
#include <bits/stdc++.h>

using namespace std;

int main(){
	bool pivot;
	int p, len;
	long long l, r;
	string s;

	pivot = false;
	l = r = 0;

	cin >> s;

	p = s.find('^'), len = s.size();

	for(int i = 0; i < len; i++){
		if(s[i] == '^') pivot = true;
		else if(isdigit(s[i]) && pivot == false) l += (s[i] - '0') * (p - i);
		else if(isdigit(s[i]) && pivot == true) r += (s[i] - '0') * (i - p);
	}

	if(l == r) printf("balance\n");
	else if(l > r) printf("left\n");
	else printf("right\n");

	return 0;
}