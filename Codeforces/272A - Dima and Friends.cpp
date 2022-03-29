// Codeforces 272A - Dima and Friends
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, f, sum, w;

	sum = 0, w = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> f;
		sum += f;
	}

	for(int i = 1; i <= 5; i++)
		if((sum + i) % (n + 1) != 1) w++;

	cout << w << endl;

	return 0;
}