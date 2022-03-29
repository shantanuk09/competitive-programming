// Codeforces 1106A - Lunar New Year and Cross Counting
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j, n, cross;
	char m[505][505];

	cin >> n;

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			cin >> m[i][j];

	for(i = 1, cross = 0; i < n; i++)
		for(j = 0; j < n; j++)
			if(m[i][j] == 'X' && m[i - 1][j - 1] == 'X' && m[i - 1][j + 1] == 'X' && m[i + 1][j - 1] == 'X' && m[i + 1][j + 1] == 'X') ++cross;

	cout << cross << endl;
	
	return 0;
}