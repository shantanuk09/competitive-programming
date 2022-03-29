// Codeforces 1165B - Polycarp Training
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
	int j, n, d, arr[SIZE];

	j = 0, d = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for(int i = 1; i <= n; i++){
		while(j != n && i > arr[j])
			j++;

		if(j == n) break;
		else arr[j] = -1, d++;
	}

	cout << d << endl;

	return 0;
}