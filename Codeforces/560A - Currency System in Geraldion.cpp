// Codeforces 560A - Currency System in Geraldion
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;
	bool one;

	one = false;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;

		if(a == 1) one = true;
	}

	if(one) cout << "-1" << endl;
	else cout << "1" << endl;

	return 0;
}