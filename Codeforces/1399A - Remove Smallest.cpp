// Codeforces 1399A - Remove Smallest
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, t, n, c, arr[55];

	cin >> t;

	while(t--){
		cin >> n;

		for(i = 0; i < n; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		for(i = 1, c = 0; i < n; i++)
			if(arr[i] - arr[i - 1] <= 1) c++;

		if((c + 1) == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}