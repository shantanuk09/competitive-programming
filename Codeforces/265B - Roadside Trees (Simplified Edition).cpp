// Codeforces 265B - Roadside Trees (Simplified Edition)
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int n, t, h[SIZE];

	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> h[i];

	t = h[0] + 1;

	for(int i = 1; i < n; i++)
		t += abs(h[i] - h[i - 1]) + 2;

	cout << t << endl;

	return 0;
}