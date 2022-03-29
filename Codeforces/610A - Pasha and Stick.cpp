// Codeforces 610A - Pasha and Stick
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;

	cin >> n;

	if(n % 2) cout << "0" << endl;
	else if((n / 2) % 2) cout << (n / 2 - 1) / 2 << endl;
	else cout << (n / 4) - 1 << endl;

	return 0;
}