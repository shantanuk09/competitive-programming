// Codeforces 194A - Exams
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;

	cin >> n >> k;

	if(k >= n * 3) cout << "0" << endl;
	else{
		while(k != 2 * n)
			k -= 3, n--;

		cout << n << endl;
	}

	return 0;
}