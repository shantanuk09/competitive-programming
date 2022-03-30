// Codeforces 847G - University Classes
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int n, r, arr[7];
	string s[SIZE];

	r = 0;
	memset(arr, 0, sizeof(arr));

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> s[i];

		for(int j = 0; j < 7; j++)
			if(s[i][j] == '1') arr[j]++;
	}

	for(int i = 0; i < 7; i++)
		r = max(r, arr[i]);

	cout << r << endl;

	return 0;
}