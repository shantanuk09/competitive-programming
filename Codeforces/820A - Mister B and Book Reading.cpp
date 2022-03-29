// Codeforces 820A - Mister B and Book Reading
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, c, v0, v1, a, l;

	cin >> c >> v0 >> v1 >> a >> l;

	c -= v0;

	for(i = 1; c > 0; i++)
		c -= min(v0 + i * a, v1) - l;

	cout << i << endl;

	return 0;
}