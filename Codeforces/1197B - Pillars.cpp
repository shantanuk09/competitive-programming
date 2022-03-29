// Codeforces 1197B - Pillars
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
	int n, index, arr[SIZE];

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == n) index = i;
	}

	for(int i = 1; i <= index; i++)
		if(arr[i] < arr[i - 1]) return printf("NO\n") * 0;

	for(int i = index + 2; i < n; i++)
		if(arr[i] > arr[i - 1]) return printf("NO\n") * 0;

	cout << "YES" << endl;

	return 0;
}