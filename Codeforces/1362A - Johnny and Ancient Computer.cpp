// Codeforces 1362A - Johnny and Ancient Computer
#include <bits/stdc++.h>

using namespace std;

int f(long long a, long long b);

int main(){
	int t;
	long long a, b;

	scanf("%d", &t);

	while(t--){
		scanf("%lld %lld", &a, &b);

		printf("%d\n", f(a, b));
	}

	return 0;
}

int f(long long a, long long b){
	int op;
	long long g;

	op = 0;

	if(a > b) swap(a, b);

	g = __gcd(a, b);

	a /= g, b /= g;

	while(b % 8 == 0 && a != b)
		b /= 8, op++;
	while(b % 4 == 0 && a != b)
		b /= 4, op++;
	while(b % 2 == 0 && a != b)
		b /= 2, op++;

	if(a == b) return op;
	else return -1;
}