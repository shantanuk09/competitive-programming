// Codeforces 215A - Bicycle Chain
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 55;

int main(){
	int n, m, a[SIZE], b, r, c;

	r = -1, c = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> a[i];

	cin >> m;

	for(int i = 0; i < m; i++){
		cin >> b;

		for(int j = 0; j < n; j++){
			if(a[j] > b) break;
			else if(b % a[j] == 0 && b / a[j] > r) r = b / a[j], c = 1;
			else if(b % a[j] == 0 && b / a[j] == r) c++;
		}
	}

	cout << c << endl;

	return 0;
}