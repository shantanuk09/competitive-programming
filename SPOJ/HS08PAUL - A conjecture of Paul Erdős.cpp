// HS08PAUL - A conjecture of Paul Erdős
#include <bits/stdc++.h>

using namespace std;

const long long BIG = 1e7;

bool isPrime(long long n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i <= sqrt(n); i += 2)
		if(n % i == 0) return false;
	return true;
}

vector<long long> primeGenerator(long long n){
	vector<long long> primes;
	for(long long i = 1; i * i < n; i++)
		for(long long j = 1; j * j * j * j < n; j++)
			if(isPrime(i * i + j * j * j * j)) primes.push_back(i * i + j * j * j * j);
	return primes;
}

int main(){
	int t, c;
	long long n;
	vector<long long> v;
	cin >> t;
	v = primeGenerator(BIG);
	sort(v.begin(), v.end());
	unique(v.begin(), v.end());
	while(t--){
		c = 0;
		cin >> n;
		for(int i = 0; i < v.size(); i++){
			if(v[i] <= n) c++;
			else break;
		}
		cout << c << endl;
	}

	return 0;
}