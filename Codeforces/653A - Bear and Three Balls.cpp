// Codeforces 653A - Bear and Three Balls
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int n, t, arr[SIZE];

	memset(arr, 0, sizeof(arr));

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> t;
		arr[t] = 1;
	}

	for(int i = 3; i <= 1000; i++)
		if(arr[i - 2] && arr[i - 1] && arr[i]) return printf("YES\n") * 0;

	cout << "NO" << endl;

	return 0;
}