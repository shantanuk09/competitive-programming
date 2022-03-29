// Codeforces 219A - k-String
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 26;

int main(){
	int k, arr[SIZE];
	string s, p;

	memset(arr, 0, sizeof(arr));

	cin >> k >> s;

	for(int i = 0; i < s.size(); i++)
		arr[s[i] - 'a']++;

	for(int i = 0; i < SIZE; i++){
		if(arr[i] && arr[i] % k == 0){
			for(int j = 0; j < arr[i] / k; j++)
				p += 'a' + i;
		}
		else if(arr[i] && arr[i] % k != 0) return printf("-1\n") * 0;
	}

	for(int i = 1; i <= k; i++)
		cout << p;
	cout << endl;

	return 0;
}