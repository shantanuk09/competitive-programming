// Codeforces 1342A - Road To Zero
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long x, y, a, b, m;

	cin >> t;

	while(t--){
		cin >> x >> y >> a >> b;
		cout << min((x + y) * a, min(x, y) * b + (max(x, y) - min(x, y)) * a) << endl;
	}

	return 0;
}