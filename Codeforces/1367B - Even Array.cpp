// Codeforces 1367B - Even Array
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, t, a, oddOutOfPlace, evenOutOfPlace;

	cin >> t;

	while(t--){
		cin >> n;

		for(i = 0, oddOutOfPlace = 0, evenOutOfPlace = 0; i < n; i++){
			cin >> a;

			if(a % 2 && !(i % 2)) oddOutOfPlace++;
			else if(!(a % 2) && i % 2) evenOutOfPlace++;
		}

		if(oddOutOfPlace == evenOutOfPlace) cout << oddOutOfPlace << endl;
		else cout << "-1" << endl;
	}

	return 0;
}