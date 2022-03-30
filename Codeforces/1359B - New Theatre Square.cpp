// Codeforces 1359B - New Theatre Square
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int t, n, m, x, y, c;
	char arr[SIZE][SIZE];

	cin >> t;

	while(t--){
		c = 0;

		cin >> n >> m >> x >> y;

		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> arr[i][j];

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(j + 1 < m && arr[i][j] == '.' && arr[i][j + 1] == '.') c += min(2 * x, y), j++;
				else if(arr[i][j] == '.') c += x;
			}
		}

		cout << c << endl;
	}

	return 0;
}