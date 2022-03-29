// Codeforces 1469A - Regular Bracket Sequence
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	string s;

	scanf("%d", &t);

	while(t--){
		cin >> s;

		if(s.size() % 2 || s[0] == ')' || s[s.size() - 1] == '(') printf("No\n");
		else printf("Yes\n");
	}

	return 0;
}