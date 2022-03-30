// Codeforces 244A - Dividing Orange
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int j, n, k, p, arr[SIZE];
	vector<int> v;

	cin >> n >> k;

	for(int i = 1; i <= n * k; i++)
		v.push_back(i);

	for(int i = 0; i < k; i++){
		scanf("%d", &arr[i]);
		
		v.erase(find(v.begin(), v.end(), arr[i]));
	}

	for(int i = 0, j = 0; i < k; i++){
		cout << arr[i] << " ";

		for(int s = 0; s != (n - 1); s++, j++)
			cout << v[j] << " ";

		cout << endl;
	}

	return 0;
}