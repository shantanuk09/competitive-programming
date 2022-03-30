// Codeforces 415A - Mashmokh and Lights
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int i, j, n, m, b, arr[SIZE];

	memset(arr, 0, sizeof(arr));

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		cin >> b;

		j = b - 1;

		while(j < n && !arr[j])
			arr[j++] = b;
	}

	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}