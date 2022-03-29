// Codeforces 373A - Collecting Beats is Fun
#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int k;
	map<int, int> m;
	map<int, int>::iterator it;

	cin >> k;

	for(int i = 0; i < 16; i++){
		cin >> c;
		if(c != '.') m[c - '0']++;
	}

	for(it = m.begin(); it != m.end(); ++it)
		if(it -> second > 2 * k) return printf("NO\n") * 0;

	printf("YES\n");

	return 0;
}