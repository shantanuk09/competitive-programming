// Codeforces 334A - Candy Bags
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, p, q;

	cin >> n;

	p = 1, q = n * n;

	for(int i = 0; i < n; i++){
		for(int j = 1; j <= n / 2; j++, p++)
			printf("%d ", p);
		for(int k = 1; k <= n / 2; k++, q--)
			printf("%d ", q);
		cout << endl;
	}

	return 0;
}