// Codeforces 267A - Subtractions
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b, op;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &a, &b);

		op = 0;

		while(a > 0 && b > 0){
			if(a >= b) op += a / b, a %= b;
			else op += b / a, b %= a;
		}

		printf("%d\n", op);
	}

	return 0;
}