// Codeforces 616A - Comparing Two Long Integers
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e6 + 5;

int main(){
	int i, j;
	char a[SIZE], b[SIZE];

	scanf("%s %s", a, b);

	i = strlen(a), j = strlen(b);

	reverse(a, a + strlen(a)), reverse(b, b + strlen(b));

	while(i < j)
		a[i++] = '0';
	while(i > j)
		b[j++] = '0';

	a[i] = '\0', b[j] = '\0';

	for(i = strlen(a) - 1; i >= 0; i--){
		if(a[i] > b[i]) return printf(">\n") * 0;
		else if(a[i] < b[i]) return printf("<\n") * 0;
	}

	printf("=\n");

	return 0;
}