// Codeforces 1199B - Water Lily
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long h, l;
	double r, cosx;

	cin >> h >> l;

	r = sqrt(h * h + l * l);
	cosx = h / r;

	cout << setprecision(10) << r / 2 / cosx - h << endl;

	return 0;
}