// Codeforces 1476A - K-divisible Sum
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, k;
	long s;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &n, &k);

		if(n % k == 0) s = n;
		else s = (n / k + 1) * k;

		cout << s / n + (s % n != 0) << endl;
	}

	return 0;
}