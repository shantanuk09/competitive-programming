// Codeforces 63A - Sinking Ship
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string p, q;
	vector<string> r, w, m, c;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> p >> q;

		if(q == "rat") r.push_back(p);
		else if(q == "woman" || q == "child") w.push_back(p);
		else if(q == "man") m.push_back(p);
		else c.push_back(p);
	}

	for(int i = 0; i < r.size(); i++)
		cout << r[i] << endl;

	for(int i = 0; i < w.size(); i++)
		cout << w[i] << endl;

	for(int i = 0; i < m.size(); i++)
		cout << m[i] << endl;

	cout << c[0] << endl;

	return 0;
}