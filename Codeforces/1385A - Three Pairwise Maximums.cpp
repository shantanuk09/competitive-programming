// Codeforces 1385A - Three Pairwise Maximums
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, arr[3];

	cin >> t;

	while(t--){
		for(int i = 0; i < 3; i++)
			cin >> arr[i];

		sort(arr, arr + 3);

		if((arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]) || (arr[0] == arr[1] && arr[0] != arr[2])) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			cout << arr[2] << " " << arr[0] << " " << arr[0] << endl;
		}
	}

	return 0;
}