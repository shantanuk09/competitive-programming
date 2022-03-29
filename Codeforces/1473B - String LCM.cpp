// Codeforces 1473B - String LCM
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, len;
	string p, q, r, s;

	scanf("%d", &t);

	while(t--){
		r = "", s = "";

		cin >> p >> q;

		if(p.size() > q.size()) swap(p, q);

		len = (p.size() * q.size()) / __gcd(p.size(), q.size());
	
		while(r.size() != len)
			r += p;

		while(s.size() != len)
			s += q;

		if(r == s) cout << r << endl;
		else cout << "-1" << endl;
	}

	return 0;
}