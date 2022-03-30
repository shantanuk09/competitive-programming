// Codeforces 268B - Buttons
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b;

	b = 0;

	cin >> n;

	for(int i = 1; i <= n; i++)
		b += (n - i) * i;

	cout << b + n << endl;

	return 0;
}