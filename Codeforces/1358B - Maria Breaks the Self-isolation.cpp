// Codeforces 1358B - Maria Breaks the Self-isolation
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int t, n, g, arr[SIZE];

	cin >> t;

	while(t--){
		g = 0;

		cin >> n;

		for(int i = 1; i <= n; i++)
			cin >> arr[i];

		sort(arr + 1, arr + n + 1);

		for(int i = 1; i <= n; i++)
			if(arr[i] <= i) g = max(g, i);

		cout << g + 1 << endl;
	}

	return 0;
}