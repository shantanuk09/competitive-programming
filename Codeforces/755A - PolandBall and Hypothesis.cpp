    // Codeforces 755A - PolandBall and Hypothesis
	#include <bits/stdc++.h>
     
    using namespace std;
     
    bool isPrime(int n);
     
    int main(){
    	int i, n, m;
     
    	cin >> n;
     
    	for(m = 1; isPrime(n * m + 1); m++)
    		;
     
    	cout << m << endl;
     
    	return 0;
    }
     
    bool isPrime(int n){
    	if(n <= 1) return false;
    	if(n <= 3) return true;
    	if(!(n % 2) || !(n % 3)) return false;
     
    	for(int i = 6; i <= sqrt(n); i += 6)
    		if(!(n % (i - 1)) || !(n % (i + 1))) return false;
     
    	return true;
    }