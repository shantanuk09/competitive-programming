// Codeforces 766A - Mahmoud and Longest Uncommon Subsequence
#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;

	cin >> a >> b;

	if(a == b) printf("-1\n");
	else printf("%ld\n", max(a.size(), b.size()));

	return 0;
}