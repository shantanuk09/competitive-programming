// Codeforces 1485A - Add and Divide
#include <bits/stdc++.h>

using namespace std;

int powahh(int p, int n);

int main(){
	int t, op;
	int a, b;

	cin >> t;

	while(t--){
		cin >> a >> b;

		op = a + 5;

		for(int i = max(2, b); i <= op; i++)
			op = min(op, (i - b) + powahh(i, a));

		if(b > a) cout << "1" << endl;
		else cout << op << endl;
	}

	return 0;
}

int powahh(int p, int n){
	int e;
	long long q;

	e = 1, q = p;

	while(q <= n)
		q *= p, e++;

	return e;
}