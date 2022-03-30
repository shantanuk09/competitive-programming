// Codeforces 263B - Squares
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2;

int main(){
	int n, k, arr[SIZE];

	cin >> n >> k;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	if(n - k < 0) cout << "-1" << endl;
	else cout << arr[n - k] << " " << arr[n - k] << endl;

	return 0;
}