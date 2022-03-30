// Codeforces 387A - George and Sleep
#include <bits/stdc++.h>

using namespace std;

int main(){
	int h1, m1, h2, m2;

	scanf("%d:%d", &h1, &m1);
	scanf("%d:%d", &h2, &m2);

	h1 -= h2, m1 -= m2;

	if(m1 < 0) h1--, m1 += 60;
	if(h1 < 0) h1 += 24;
	
	if(h1 < 10) cout << "0" << h1 << ":";
	else cout << h1 << ":";

	if(m1 < 10) cout << "0" << m1 << endl;
	else cout << m1 << endl;

	return 0;
}