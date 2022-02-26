// TDPRIMES - Printing some primes
#include <iostream>
#include <vector>

using namespace std;

const long long SIZE = 1e8;

vector<long long> primeSieve(long long n){
	vector<bool> isPrime(SIZE, true);
	vector<long long> primes;
	isPrime[0] = false, isPrime[1] = false;
	primes.push_back(2);
	for(long long i = 4; i < SIZE; i += 2)
		isPrime[i] = false;
	for(long long i = 3; i < SIZE; i += 2){
		if(isPrime[i]){
			primes.push_back(i);
			for(long long j = i * i; j < SIZE; j += i)
				isPrime[j] = false;
		}
	}
	return primes;
}

int main(){
	vector<long long> v;
	v = primeSieve(SIZE);
	for(long long i = 0; i < v.size(); i += 100)
		printf("%lld\n", v[i]);

	return 0;
}