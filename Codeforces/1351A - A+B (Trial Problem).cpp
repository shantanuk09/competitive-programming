// Codeforces 1351A - A+B (Trial Problem)
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, a, b;
	vector<int> v;

	cin >> n;

	for(i = 0; i < n; i++){
		cin >> a >> b;

		v.push_back(a + b);
	}

	for(i = 0; i < n; i++)
		cout << v[i] << endl;

	return 0;
}