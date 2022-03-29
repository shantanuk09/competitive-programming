// Codeforces 441A - Valera and Antique Items
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, v, k, p;
	bool deal;
	vector<int> seller;

	cin >> n >> v;

	for(int i = 0; i < n; i++){
		cin >> k;

		deal = false;

		for(int j = 0; j < k; j++){
			cin >> p;

			if(p < v) deal = true;
		}

		if(deal) seller.push_back(i + 1);
	}

	cout << seller.size() << endl;

	for(int i = 0; i < seller.size(); i++)
		cout << seller[i] << " ";
	cout << endl;

	return 0;
}