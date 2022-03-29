// Codeforces 1141A - Game 23
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, p, moves;

	moves = 0;

	scanf("%d %d", &n, &m);

	if(n > m) swap(n, m);

	if(m % n != 0) return printf("-1\n") * 0;
	else p = m / n;

	while(p && p % 2 == 0)
		p /= 2, moves++;
	while(p && p % 3 == 0)
		p /= 3, moves++;

	if(p == 1) printf("%d\n", moves);
	else printf("-1\n");

	return 0;
}