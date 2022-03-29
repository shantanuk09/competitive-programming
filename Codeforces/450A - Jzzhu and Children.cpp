// Codeforces 450A - Jzzhu and Children
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n, m, a, turn, maxTurn, c;

	maxTurn = -1;

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		turn = a / m + (a % m != 0);
		if(turn >= maxTurn) maxTurn = turn, c = i + 1;
	}

	printf("%d\n", c);

	return 0;
}