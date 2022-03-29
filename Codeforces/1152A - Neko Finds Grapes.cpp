// Codeforces 1152A - Neko Finds Grapes
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, m, a, b, chest[2] = {0}, key[2] = {0};

	cin >> n >> m;

	for(i = 0; i < n; i++){
		cin >> a;
		chest[a % 2]++;
	}

	for(i = 0; i < m; i++){
		cin >> b;
		key[b % 2]++;
	}

	cout << min(chest[0], key[1]) + min(chest[1], key[0]) << endl;

	return 0;
}