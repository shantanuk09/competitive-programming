// Codeforces 507A - Amr and Music
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, a;
	vector<int> index;
	vector<pair<int, int>> v;

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(make_pair(a, i + 1));
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		if(v[i].first <= k){
			index.push_back(v[i].second);
			k -= v[i].first;
		}
	}

	cout << index.size() << endl;

	for(int i = 0; i < index.size(); i++)
		cout << index[i] << " ";
	cout << endl;

	return 0;
}