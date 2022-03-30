// Codeforces 44A - Indian Summer
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string t, c;
	set<string> s;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> t >> c;

		s.insert(t + " " + c); 
	}

	cout << s.size() << endl;

	return 0;
}