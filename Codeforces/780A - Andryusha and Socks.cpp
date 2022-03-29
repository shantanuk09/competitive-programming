// Codeforces 780A - Andryusha and Socks
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, x, socksOnTable, maxSocksOnTable, arr[100005] = {0};

	cin >> n;

	for(i = 0, socksOnTable = 0, maxSocksOnTable = -1; i < 2 * n; i++){
		cin >> x;
		if(arr[x])
			socksOnTable--;
		else
			arr[x]++, socksOnTable++;

		maxSocksOnTable = max(maxSocksOnTable, socksOnTable);
	}

	cout << maxSocksOnTable << endl;

	return 0;
}