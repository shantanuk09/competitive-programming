// Codeforces 1055A - Metro
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

int main(){
	int n, s, a[SIZE], b[SIZE];

	cin >> n >> s;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];

	if(!a[0]) cout << "NO" << endl;
	else if(a[0] && a[s - 1]) cout << "YES" << endl;
	else{
		for(int i = s; i < n; i++)
			if(a[i] && b[i] && b[s - 1]) return printf("YES\n") * 0;

		cout << "NO" << endl;
	}
	
	return 0;
}