// Codeforces 165A - Supercentral Point
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e2 + 5;

int main(){
	int n, x[SIZE], y[SIZE], c;
	bool l, r, u, d;

	c = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d %d", &x[i], &y[i]);

	for(int i = 0; i < n; i++){
		l = false, r = false, u = false, d = false;

		for(int j = 0; j < n; j++){
			if(x[j] < x[i] && y[j] == y[i]) l = true;
			if(x[j] > x[i] && y[j] == y[i]) r = true;
			if(x[j] == x[i] && y[j] > y[i]) u = true;
			if(x[j] == x[i] && y[j] < y[i]) d = true; 
		}

		if(l && r && u && d) c++;
	}

	cout << c << endl;	

	return 0;
}