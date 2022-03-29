// Codeforces 994A - Fingerprints
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, m, x[10], y, fingerprint[10] = {0};

	cin >> n >> m;

	for(i = 0; i < n; i++)
		cin >> x[i];

	for(i = 0; i < m; i++){
		cin >> y;
		fingerprint[y] = 1;
	}

	for(i = 0; i < n; i++)
		if(fingerprint[x[i]]) cout << x[i] << " ";

	cout << endl;
	
	return 0;
}