// Codeforces 1388B - Captain Flint and a Long Voyage
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(int i = 0; i < 3 * n / 4; i++)
			cout << "9";

		for(int i = 0; i < ceil(1.0 * n / 4); i++)
			cout << "8";
		cout << endl;
	}

	return 0;
}

// 1001 1001 1xxx
// 1001 1001 1xxx
// 1001 1001 1001 1001