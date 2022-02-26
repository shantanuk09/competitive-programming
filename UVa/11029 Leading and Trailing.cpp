// 11029 Leading and Trailing
#include <iostream>
#include <math.h>

using namespace std;

string modularExponent(long long x, long long y, long long n){
	long long res;
	string s;
	res = 1;
	x %= n;
	if(y == 0) res = 1 % n;
	while(y > 0){
		if(y&1) res = res * x % n;
		x = x * x % n;
		y >>= 1;
	}
	s = to_string(res);
	if(s.size() == 1) return "00" + s;
	else if(s.size() == 2) return "0" + s;
	else return s;
}

void firstThreeDigits(long long x, long long n){
	int i, c;
	double d;
	string s;
	i = 0, c = 0;
	d = n * log10(x);
	d -= (int) d;
	s = to_string(pow(10, d));
	while(c != 3){
		if(isdigit(s[i])){
			c++;
			cout << s[i];
		}
		i++;
	}
}

int main(){
	int t;
	long long x, n;
	cin >> t;
	while(t--){
		cin >> x >> n;
		firstThreeDigits(x, n);
		cout << "..." << modularExponent(x, n, 1000) << endl;
	}

	return 0;
}