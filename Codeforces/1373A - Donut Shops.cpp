// Codeforces 1373A - Donut Shops
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long a, b, c, x, y;

	scanf("%d", &t);

	while(t--){
		scanf("%lld %lld %lld", &a, &b, &c);

		x = a * b, y = c;

		if(x > y) y = b;
		else y = -1;

		if(a < c) x = 1;
		else x = -1;

		cout << x << " " << y << endl;
	}

	return 0;
}