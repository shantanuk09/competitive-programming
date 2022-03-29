// Codeforces 659A - Round House
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;

	cin >> n >> a >> b;

	if(b >= 0) a = (a + b) % n;
	else a = ((n + a + b) % n + n) % n;
	
	if(a == 0) a = n;

	cout << a << endl;

	return 0;
}