// Codeforces 447B - DZY Loves Strings
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 26;

int main(){
	int n, k, w, v, arr[SIZE];
	string s;

	w = -1;
	memset(arr, 0, sizeof(arr));

	cin >> s >> k;

	for(int i = 0; i < SIZE; i++){
		cin >> arr[i];
		w = max(w, arr[i]);
	}

	n = s.size();
	v = w * ((n + k) * (n + k + 1) / 2 - n * (n + 1) / 2);

	for(int i = 0; i < n; i++)
		v += (i + 1) * arr[s[i] - 'a'];

	cout << v << endl;
	
	return 0;
}