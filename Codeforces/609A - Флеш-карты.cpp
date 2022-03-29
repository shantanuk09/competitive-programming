// Codeforces 609A - Флеш-карты
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, m, a[105], drive = 0, sum = 0;

	cin >> n >> m;

	for(i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	for(i = n - 1; sum < m; i--)
		sum += a[i], ++drive;

	cout << drive << endl;


	return 0;
}