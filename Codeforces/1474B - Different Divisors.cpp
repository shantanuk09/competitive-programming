// Codeforces 1474B - Different Divisors
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n);
long long findpCube(int d);
long long findpq(int d);

int main(){
	int t, d;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &d);

		printf("%lld\n", min(findpCube(d), findpq(d)));
	}

	return 0;
}

bool isPrime(int n){
	if(n < 2) return false;
	if(n == 2 || n == 3) return true;
	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int i = 3; i <= sqrt(n); i += 2)
		if(n % i == 0) return false;

	return true;
}

long long findpCube(int d){
	long long p;

	p = d + 1;

	while(!isPrime(p))
		p++;

	return p * p * p;
}

long long findpq(int d){
	long long p, q;

	p = d + 1;

	while(!isPrime(p))
		p++;

	q = p + d;

	while(!isPrime(q))
		q++;

	return p * q;
}