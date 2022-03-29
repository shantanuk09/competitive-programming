// Codeforces 854A - Fraction
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n;

	cin >> n;

	for(i = n / 2; i >= 1; i--)
		if(__gcd(i, n - i) == 1)
			break;

	cout << i << " " << n - i << endl;

	return 0;
}