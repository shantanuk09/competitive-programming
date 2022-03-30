// Codeforces 52A - 123-sequence
#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int n, p, q, r;

	p = 0, q = 0, r = 0;

	scanf("%d\n", &n);

	while(n--){
		c = getchar();

		if(c == '1') p++;
		else if(c == '2') q++;
		else r++;

		getchar();
	}

	printf("%d\n", p + q + r - max(p, max(q, r)));

	return 0;
}