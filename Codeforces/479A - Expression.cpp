// Codeforces 479A - Expression
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;

	cin >> a >> b >> c;

	d = max(a + b + c, (a + b) * c);
	d = max(d, a * (b + c));
	d = max(d, a * b * c);

	cout << d << endl;

	return 0;
}