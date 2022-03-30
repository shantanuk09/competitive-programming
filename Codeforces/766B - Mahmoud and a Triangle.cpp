// Codeforces 766B - Mahmoud and a Triangle
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int n, arr[SIZE];

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for(int i = 1; i < n - 1; i++)
		if(arr[i - 1] + arr[i] > arr[i + 1] && arr[i] + arr[i + 1] > arr[i - 1] && arr[i - 1] + arr[i + 1] > arr[i]) return printf("YES\n") * 0;

	printf("NO\n");			

	return 0;
}