// Codeforces 1271A - Suits
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, e, f, cost, i;

	cin >> a >> b >> c >> d >> e >> f;

	for(i = 0, cost = 0; i <= d; i++)
		cost = max(cost, min(a, i) * e + min(b, min(c, d - i)) * f);

	cout << cost << endl;

	return 0;
}