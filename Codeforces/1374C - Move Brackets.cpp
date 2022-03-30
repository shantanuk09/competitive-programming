// Codeforces 1374C - Move Brackets
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, b, c;
	string s;

	cin >> t;

	while(t--){
		cin >> n >> s;

		b = 0, c = 0;

		for(auto ch : s){
			if(ch == '(') c++;
			else c--;

			b = min(b, c);
		}

		cout << abs(b) << endl;
	}

	return 0;
}