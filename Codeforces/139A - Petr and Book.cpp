// Codeforces 139A - Petr and Book
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum, p, arr[7];

	sum = 0, p = 0;

	cin >> n;

	for(int i = 0; i < 7; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	if(n % sum != 0) n %= sum;
	else n = sum;

	for(int i = 0; i < 7; i++){
		if(p + arr[i] >= n) return printf("%d\n", i + 1) * 0;
		p += arr[i];
	}

	return 0;
}