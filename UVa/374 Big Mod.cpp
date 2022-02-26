// 374 Big Mod
#include <bits/stdc++.h>

using namespace std;

long long modularExponent(long long a, long long b, long long m){
	long long res;
	res = 1;
	a = a % m;
	while(b > 0){
		if(b&1) res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

int main(){
	long long a, b, n;
	while((scanf("%lld %lld %lld", &a, &b, &n)) != EOF)
		printf("%lld\n", modularExponent(a, b, n));
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
	else return res * res  % m;
}

int main(){
	long long a, b, m;
	while(scanf("%lld %lld %lld", &a, &b, &m) != EOF)
		printf("%lld\n", modularExponent(a, b, m));

	return 0;
}