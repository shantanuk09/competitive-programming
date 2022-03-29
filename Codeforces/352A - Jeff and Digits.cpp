// Codeforces 352A - Jeff and Digits
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, f, z, a;

	f = 0, z = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;

		if(a == 0) z++;
		else f++;
	}

	if(!z) cout << "-1" << endl;
	else if(f < 9) cout << "0" << endl;
	else{
		for(int i = 0; i < f / 9 * 9; i++)
			cout << "5";

		for(int i = 0; i < z; i++)
			cout << "0";
		cout << endl;
	}

	return 0;
}