// Codeforces 946A - Partition
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, a, maxValue;

	cin >> n;

	for(i = 0, maxValue = 0; i < n; i++){
		cin >> a;
		if(a >= 0) maxValue += a;
		else maxValue -= a;
	}

	cout << maxValue << endl;

	return 0;
}