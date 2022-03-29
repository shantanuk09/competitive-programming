// Codeforces 1174A - Ehab Fails to Be Thanos
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e3 + 5;

int main(){
	int n, arr[SIZE];

	cin >> n;

	for(int i = 0; i < 2 * n; i++)
		cin >> arr[i];

	sort(arr, arr + 2 * n);

	if(arr[0] == arr[2 * n - 1]) cout << "-1" << endl;
	else{
		for(int i = 0; i < 2 * n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}