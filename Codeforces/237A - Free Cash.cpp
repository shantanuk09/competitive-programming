// Codeforces 237A - Free Cash
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c;
	string h, m;
	map<string, int> cash;

	c = -1;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		cin >> h >> m;
		cash[h + ":" + m]++;
	}

	for(auto it : cash)
		c = max(c, it.second);

	printf("%d\n", c);

	return 0;
}