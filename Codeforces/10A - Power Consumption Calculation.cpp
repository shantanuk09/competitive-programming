// Codeforces 10A - Power Consumption Calculation
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n, p1, p2, p3, t1, t2, l[SIZE], r[SIZE], power, x, y, z;

	power = 0;

	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

	for(int i = 0; i < n; i++){
		cin >> l[i] >> r[i];
		power += (r[i] - l[i]) * p1;
	}

	for(int i = 1; i < n; i++){
		x = min(l[i] - r[i - 1], t1);
		y = min(l[i] - r[i - 1] - x, t2);
		z = l[i] - r[i - 1] - x - y;
		power += x * p1 + y * p2 + z * p3;
	}

	cout << power << endl;

	return 0;
}