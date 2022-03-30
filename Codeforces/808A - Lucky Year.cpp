// Codeforces 808A - Lucky Year
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c, d, m;

	c = 0, d = 1;

	cin >> n;

	m = n;

	while(m)
		m /= 10, c++;

	for(int i = 0; i < c - 1; i++)
		d *= 10;

	cout << d - (n % d) << endl;

	return 0;
}