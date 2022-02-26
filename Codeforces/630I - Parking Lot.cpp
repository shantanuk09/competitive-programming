// 630I - Parking Lot
#include <iostream>

using namespace std;

long long recursiveExponent(long long x, long long n){
	long long res;
	if(n == 0) return 1;
	res = recursiveExponent(x, n / 2);
	if(n&1) return x * res * res;
	else return res * res;
}

int main(){
	long long n;
	cin >> n;
	cout << 2 * 3 * recursiveExponent(4, n - 2) + (n - 3) * 3 * 3 * recursiveExponent(4, n - 3) << endl;

	return 0;
}