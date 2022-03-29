// Codeforces 805B - 3-palindrome
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;

	s = "aabbaabb";

	cin >> n;

	for(int i = 1; i <= n; i++)
		cout << s[(i + 7) % 8];
	cout << endl;

	return 0;
}