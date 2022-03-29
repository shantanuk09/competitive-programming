// Codeforces 1199A - City Day
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	bool rainy;
	int n, x, y, arr[SIZE];

	cin >> n >> x >> y;

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 0; i < n; i++){
		rainy = true;

		for(int j = i - 1; j >= max(0, i - x); j--)
			if(arr[j] <= arr[i]) rainy = false;

		for(int j = i + 1; j < n && j <= (i + y); j++)
			if(arr[j] <= arr[i]) rainy = false;

		if(rainy) return printf("%d\n", i + 1) * 0;
	}

	return 0;
}