// Codeforces 500A - New Year Transportation
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int i, n, t, arr[SIZE];

	i = 1;

	scanf("%d %d", &n, &t);

	for(int i = 1; i <= n - 1; i++)
		scanf("%d", &arr[i]);

	while(i <= t){
		i += arr[i];

		if(i == t) return printf("YES\n") * 0;
	}

	printf("NO\n");

	return 0;
}