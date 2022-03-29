// Codeforces 1020B - Badge
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int a, n, p[SIZE], arr[SIZE];

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> p[i];

	for(int i = 0; i < n; i++){
		memset(arr, 0, sizeof(arr));

		a = i;

		while(arr[a] <= 1)
			arr[a]++, a = p[a] - 1;

		cout << a + 1 << " ";
	}

	cout << endl;

	return 0;
}