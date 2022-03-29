#include <bits/stdc++.h>

using namespace std;

// Returns true if a number is prime, false otherwise.
bool isPrime(long long n);
// Returns the number of divisors of a number n. 
int numberOfDivisors(long long n);

int main(){
	for(long long i = 1; ; i++)
		if(numberOfDivisors(i * (i + 1) / 2) > 500) return printf("%lld\n", i * (i + 1) / 2) * 0;

	return 0;
}

bool isPrime(long long n){
	if(n < 2) return false;
	if(n == 2 || n == 3) return true;
	if(n % 2 == 0) return false;

	for(int i = 3; i <= sqrt(n); i += 3)
		if(n % i == 0) return false;

	return true;
}

int numberOfDivisors(long long n){
	int divisor, c;

	divisor = 1, c = 0;

	// If n is divisible by 2. 
	while(n % 2 == 0)
		n /= 2, c++;

	divisor *= (c + 1);

	c = 0;

	// If n is divisible by 3.
	while(n % 3 == 0)
		n /= 3, c++;

	divisor *= (c + 1);

	for(long long i = 1; n != 1; i++){
		c = 0;

		// All prime numbers except 2 & 3 are if the form 6k - 1 or 6k + 1, where k = 1, 2, 3, .. , n.
		if(isPrime(6 * i - 1))
			while(n % (6 * i - 1) == 0)
				n /= (6 * i - 1), c++;

		divisor *= (c + 1);

		c = 0;

		if(isPrime(6 * i + 1))
			while(n % (6 * i + 1) == 0)
				n /= (6 * i + 1), c++;

		divisor *= (c + 1);
	}

	return divisor;
}