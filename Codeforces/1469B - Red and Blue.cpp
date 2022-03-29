// Codeforces 1469B - Red and Blue
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m, x;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		vector<int> r(n);

		for(int &x : r)
			cin >> x;

		scanf("%d", &m);

		vector<int> b(m);

		for(int &x : b)
			cin >> x;

		partial_sum(r.begin(), r.end(), r.begin());
		partial_sum(b.begin(), b.end(), b.begin());

		cout << max(0, *max_element(r.begin(), r.end())) + max(0, *max_element(b.begin(), b.end())) << '\n';
	}

	return 0;
}