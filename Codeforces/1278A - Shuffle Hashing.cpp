// Codeforces 1278A - Shuffle Hashing
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 26;

string canHash(string p, string h);

int main(){
	int t;
	string p, h;

	cin >> t;

	while(t--){
		cin >> p >> h;

		cout << canHash(p, h) << endl;
	}

	return 0;
}

string canHash(string p, string h){
	int n;
	vector<int> c1(SIZE);

	n = h.size();

	for(int i = 0; i < p.size(); i++)
		c1[p[i] - 'a']++;

	for(int i = 0; i < n; i++){
		vector<int> c2(SIZE);

		for(int j = i; j < n; j++){
			c2[h[j] - 'a']++;

			if(c1 == c2) return "YES";
		}
	}

	return "NO";
}