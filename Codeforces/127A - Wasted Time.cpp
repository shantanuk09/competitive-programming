// Codeforces 127A - Wasted Time
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, x1, y1, x, y;
	double d;

	d = 0;

	cin >> n >> k >> x1 >> y1;

	for(int i = 1; i < n; i++){
		cin >> x >> y;

		d += hypot(x - x1, y - y1);
		x1 = x, y1 = y;
	}

	cout << setprecision(10) << d * k / 50.0 << endl;

	return 0;
}