// Codeforces 499B - Lecture
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	string a, b, c;
	map<string, string> lang;

	cin >> n >> m;

	for(int i = 0; i < m; i++){
		cin >> a >> b;

		if(a.size() <= b.size()) lang[a] = a;
		else lang[a] = b;
	}

	for(int i = 0; i < n; i++){
		cin >> c;
		cout << lang[c] << " ";
	}

	cout << endl;

	return 0;
}