// Codeforces 69A - Young Physicist
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, z, fx, fy, fz;

	fx = 0, fy = 0, fz = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;

		fx += x, fy += y, fz += z;
	}

	if(!fx && !fy && !fz) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}