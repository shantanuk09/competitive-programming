// Codeforces 1450B - Balls of Steel
#include <bits/stdc++.h>

using namespace std;

bool foundBall(vector<pair<int, int>> v, int n, int k);

int main(){
	bool found;
	int t, n, k, x, y;
	vector<pair<int, int>> v;

	cin >> t;

	while(t--){
		cin >> n >> k;

		for(int i = 0; i < n; i++){
			cin >> x >> y;

			v.push_back(make_pair(x, y));
		}

		sort(v.begin(), v.end());

		if(foundBall(v, n, k)) cout << "1" << endl;
		else cout << "-1" << endl;

		v.clear();
	}

	return 0;
}

bool foundBall(vector<pair<int, int>> v, int n, int k){
	bool found;

	for(int i = 0; i < n; i++){
		found = true;

		for(int j = 0; j < n; j++){
			if(abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) > k){
				found = false;
				break;
			}
		}

		if(found) return true;
	}

	return false;
}