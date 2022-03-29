// Codeforces 1293B - JOE is on TV!
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	float r;

	r = 0;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
		r += 1.0 / i;

	printf("%f\n", r);

	return 0;
}