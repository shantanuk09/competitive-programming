// Codeforces 1395A - Boboniu Likes to Color Balls
#include <bits/stdc++.h>

using namespace std;

int oddCount(int a, int b, int c, int d){
	return (a % 2) + (b % 2) + (c % 2) + (d % 2);
}

int main(){
	bool flag;
	int t, r, g, b, w;

	scanf("%d", &t);

	while(t--){
		flag = false;

		scanf("%d %d %d %d", &r, &g, &b, &w);

		if(oddCount(r, g, b, w) <= 1) flag = true;
		
		if(r && g && b) r--, g--, b--, w += 3;

		if(oddCount(r, g, b, w) <= 1) flag = true;

		if(flag) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}