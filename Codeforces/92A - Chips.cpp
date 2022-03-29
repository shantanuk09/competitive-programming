// Codeforces 92A - Chips
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, m;

	cin >> n >> m;

	i = 1;

	while(m - i >= 0){
		m -= i;
		if(i == n) i = 1;
		else i++;
	}

	cout << m << endl;

	return 0;
}