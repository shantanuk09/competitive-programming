// Codeforces 379A - New Year Candles
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, t;

	t = 0;

	scanf("%d %d", &a, &b);

	while(a){
		a--;
		t++;

		if(t % b == 0) a++;
	}

	printf("%d\n", t);

	return 0;
}