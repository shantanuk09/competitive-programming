// Codeforces 1077B - Disturbed People
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n, c, arr[SIZE];

	c = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 1; i < n - 1; i++)
		if(arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1) c++, arr[i + 1] = 0;

	cout << c << endl;

	return 0;
}