// Codeforces 1360B - Honest Coach
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, t, n, diff, s[100];

	cin >> t;
	
	while(t--){
		cin >> n;

		for(i = 0; i < n; i++)
			cin >> s[i];

		sort(s, s + n);

		for(i = 1, diff = 9999; i < n; i++)
			diff = min(diff, s[i] - s[i - 1]);

		cout << diff << endl;
	}

	return 0;
}