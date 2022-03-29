// Codeforces 1051B - Relatively Prime Pairs
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long l, r;
	vector<pair<long long, long long>> v;

	cin >> l >> r;

	for(long long i = l; i < r; i += 2){
		if(__gcd(i, i + 1)) v.push_back(make_pair(i, i + 1));
		else return printf("NO\n") * 0;
	}

	cout << "YES" << endl;

	for(int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << endl;

	return 0;
}