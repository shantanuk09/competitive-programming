// Codeforces 1133A - Middle of the Contest
#include <bits/stdc++.h>

using namespace std;

void addMinutes(int h1, int m1, int min);

int main(){
	int h1, h2, m1, m2;

	scanf("%d:%d", &h1, &m1);
	scanf("%d:%d", &h2, &m2);

	addMinutes(h1, m1, ((h2 * 60 + m2) - (h1 * 60 + m1)) / 2);

	return 0;
}

void addMinutes(int h1, int m1, int min){
	int t, hh, mm;

	t = h1 * 60 + m1 + min;

	hh = t / 60;
	t %= 60;
	mm = t;

	if(hh < 10) cout << "0" << hh << ":";
	else cout << hh << ":";

	if(mm < 10) cout << "0" << mm << endl;
	else cout << mm << endl;
}