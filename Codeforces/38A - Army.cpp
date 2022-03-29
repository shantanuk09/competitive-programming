// Codeforces 38A - Army
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, n, i, y, d[105];

	cin >> n;

	for(i = 1; i < n; i++)
		cin >> d[i];

	cin >> a >> b;

	for(i = a, y = 0; i < b; i++)
		y += d[i];

	cout << y << endl;

	return 0;
}