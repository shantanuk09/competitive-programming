// Codeforces 681A - A Good Contest
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, flag, before, after;
	string name;

	cin >> n;

	for(i = 0, flag = 0; i < n; i++){
		cin >> name >> before >> after;

		if(before >= 2400 && after > before){
			flag = 1;
			break;
		}
	}

	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}