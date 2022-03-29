// Codeforces 1237A - Balanced Rating Changes
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, flag;

	flag = 1;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;

		if(a % 2 == 0) cout << a / 2 << endl;
		else if(flag){
			cout << (a + 1) / 2 << endl;
			flag = 0;
		}
		else{
			cout << (a - 1) / 2 <<endl;
			flag = 1;
		}
	}

	return 0;
}