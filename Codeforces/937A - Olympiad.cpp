// Codeforces 937A - Olympiad
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, currentElement, distinct, a[105];

	cin >> n;

	for(i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	for(i = 0, currentElement = -1, distinct = 0; i < n; i++)
		if(a[i] && a[i] != currentElement)
			distinct++, currentElement = a[i];

	cout << distinct << endl;

	return 0;
}