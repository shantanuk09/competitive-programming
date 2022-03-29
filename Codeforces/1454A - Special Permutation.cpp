// Codeforces 1454A - Special Permutation
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;

	cin >> t;

	while(t--){
		cin >> n;

		for(int i = 2; i <= n; i++)
			cout << i << " ";
		cout << "1" << endl;
	}

	return 0;
}