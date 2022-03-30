// Codeforces 579A - Raising Bacteria
#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, b;

	b = 0;

	cin >> x;

	while(x){
		if(x&1) b++;
		x >>= 1;
	}

	cout << b << endl;

	return 0;
}