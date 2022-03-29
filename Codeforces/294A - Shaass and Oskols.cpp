// Codeforces 294A - Shaass and Oskols
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, m, a[105], x, y;

	cin >> n;

	for(i = 1; i <= n; i++)
		cin >> a[i];

	cin >> m;

	for(i = 0; i < m; i++){
		cin >> x >> y;

		if(x + 1 <= n) a[x + 1] += (a[x] - y);
		if(x - 1 <= n) a[x - 1] += (y - 1);
		a[x] = 0;
	}

	for(i = 1; i <= n; i++)
		cout << a[i] << endl;

	return 0;
}