// Codeforces 577A - Multiplication Table
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, p;

	p = 0;

	cin >> n >> x;

	for(int i = 1; i <= n; i++)
		if(x % i == 0 && x / i <= n) p++;

	cout << p << endl;

	return 0;
}