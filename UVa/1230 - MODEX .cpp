// UVa 1230 - MODEX 
#include <bits/stdc++.h>

using namespace std;

long long exponentModulo(long long x, long long y, long long n){
	if(y == 0) return 1;
	long long res;
	res = 1, x %= n;
	while(y > 0){
		if(y&1) res = res * x % n;
		x = x * x % n;
		y >>= 1;
	}
	return res;
}

int main(){
	int t;
	long long x, y, n;
	cin >> t;
	while(t--){
		cin >> x >> y >> n;
		cout << exponentModulo(x, y, n) << endl;
	}

	return 0;
}

// Alternate 1
#include <bits/stdc++.h>

using namespace std;

long long modularExponent(long long a, long long b, long long m){
	if(b == 0) return 1;
	long long res;
	res = modularExponent(a % m, b / 2, m);
	if(b&1) return (a * res % m) * res % m;
	else return res * res % m;
}

int main(){
	int t;
	long long a, b, m;
	cin >> t;
	while(t--){
		cin >> a >> b >> m;
		cout << modularExponent(a, b, m) << endl;
	}

	return 0;
}