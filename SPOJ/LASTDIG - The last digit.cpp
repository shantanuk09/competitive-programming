// LASTDIG - The last digit
#include <iostream>

using namespace std;

const int SIZE = 4;

int main(){
	int t, arr[SIZE];
	long long a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a == 0) cout << "0" << endl;
		else if(b == 0) cout << "1" << endl;
		else{
			arr[0] = a * a * a * a % 10;
			arr[1] = a % 10;
			arr[2] = a * a % 10;
			arr[3] = a * a * a % 10;
			cout << arr[b % 4] << endl;
		}
	}

	return 0;
}