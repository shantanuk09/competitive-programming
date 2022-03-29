// Codeforces 1411B - Fair Numbers
#include <bits/stdc++.h>

using namespace std;

bool isFair(long long n);

int main(){
	int t;
	long long n;

	cin >> t;

	while(t--){
		cin >> n;

		for(long long int i = n; ; i++){
			if(isFair(i)){
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}

bool isFair(long long n){
	long long rem, copy;

	copy = n;

	while(copy){
		rem = copy % 10;
		copy /= 10;

		if(rem && n % rem) return false;
	}

	return true;
}