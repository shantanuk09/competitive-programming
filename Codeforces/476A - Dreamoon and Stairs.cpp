// Codeforces 476A - Dreamoon and Stairs
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, moves, two;

	cin >> n >> m;

	moves = n / 2 + n % 2, two = n / 2;

	while(two >= 0){
		if(moves % m == 0) return printf("%d\n", moves) * 0;

		moves++, two--;		
	}

	printf("-1\n");

	return 0;
}