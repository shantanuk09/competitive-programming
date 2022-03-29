// Codeforces 1409A - Yet Another Two Integers Problem
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, a, b;

	cin >> t;

	while(t--){
		cin >> a >> b;

		cout << (int) ceil(abs(b - a) / 10.0) << endl;
	}

	return 0;
}