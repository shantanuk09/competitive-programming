// Codeforces 1369A - FashionabLee
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;

	cin >> t;

	while(t--){
		cin >> n;

		if(!(n  % 4)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}