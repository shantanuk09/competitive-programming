// Codeforces 631A - Interview
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, x, y;

	x = 0, y = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;
		x = (x | a);
	}

	for(int i = 0; i < n; i++){
		cin >> a;
		y = (y | a);
	}

	cout << x + y << endl;

	return 0;
}