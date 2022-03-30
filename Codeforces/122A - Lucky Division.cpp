// Codeforces 122A - Lucky Division
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

	cin >> n;

	for(int i = 0; i < 14; i++)
		if(n % arr[i] == 0) return printf("YES\n") * 0;

	printf("NO\n");

	return 0;
}