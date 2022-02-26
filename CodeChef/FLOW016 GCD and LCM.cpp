// FLOW016 GCD and LCM
#include <iostream>

using namespace std;

long long GCD(long a, long b){
	if(b == 0) return a;
	else return GCD(b, a % b);
}

int main(){
	int t;
	long long a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << GCD(a, b) << " " << a / GCD(a, b) * b << endl;
	}

	return 0;
}