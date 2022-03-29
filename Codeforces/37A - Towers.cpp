// Codeforces 37A - Towers
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l, h;
	map<int, int> m;

	h = -1;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &l);
		m[l]++;
	}

	for(auto it : m)
		h = max(h, it.second);

	printf("%d %ld\n", h, m.size());

	return 0;
}