// Codeforces 595A - Vitaly and Night
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, n, m, lightsOn, flats[105][210];

	cin >> n >> m;

	for(i = 0; i < n; i++)
		for(j = 0; j < 2 * m; j++)
			cin >> flats[i][j];

	for(i = 0, lightsOn = 0; i < n; i++)
		for(j = 0; j < 2 * m; j += 2)
			if(flats[i][j] == 1 || flats[i][j + 1] == 1) ++lightsOn;

	cout << lightsOn << endl;

	return 0;
}