// Codeforces 1148A - Another One Bites The Dust
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int a, b, c;

	cin >> a >> b >> c;

	cout << 2 * (min(a, b) + c) + (a != b) << endl;

	return 0;
}