// LOCKER - Magic of the locker
#include <iostream>

using namespace std;

const long long BIG = 1e9 + 7;

long long modularExponent(long long x, long long n, long long p){
	long long res;
	res = 1, x %= p;
	if(n == 0) return 1 % p;
	while(n > 0){
		if(n&1) res = res * x % BIG;
		x = x * x % BIG;
		n >>= 1;
	}	
	return res;
}

int main(){
	int t;
	long long x, p;
	cin >> t;
	while(t--){
		cin >> x;
		if(x < 3) p = x;
		else if(x % 3 == 1) p = 4 * modularExponent(3, (x - 4) / 3, BIG);
		else if(x % 3 == 2) p = 2 * modularExponent(3, (x - 2) / 3, BIG);		
		else p = modularExponent(3, x / 3, BIG);
		p %= BIG;
		cout << p << endl;
	}

	return 0;
}