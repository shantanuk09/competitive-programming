// Codeforces 680B - Bear and Finding Criminals
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int j, n, a, c, d, arr[SIZE], impossible[SIZE];

	c = 0;

	scanf("%d %d", &n, &a);

	for(int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for(int i = 1; i <= n; i++)
		for(int j = i + 1; j <= n; j++)
			if(abs(i - a) == abs(j - a) && arr[i] != arr[j]) impossible[i] = impossible[j] = true;

	for(int i = 1; i <= n; i++)
		if(arr[i] && !impossible[i]) c++;
	
	printf("%d\n", c);

	return 0;
}