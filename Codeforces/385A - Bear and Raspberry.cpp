// Codeforces 385A - Bear and Raspberry
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n, c, p, arr[SIZE];

	p = 0;

	cin >> n >> c;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 1; i < n; i++)
		if(arr[i - 1] > arr[i]) p = max(p, arr[i - 1] - arr[i] - c);

	cout << p << endl;

	return 0;
}