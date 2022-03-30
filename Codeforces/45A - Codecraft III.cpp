// Codeforces 45A - Codecraft III
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n;
	string s;
	string months[] = {"January", "February", "March", 
						"April", "May", "June", 
						"July", "August", "September", 
						"October", "November", "December"};

	cin >> s >> n;

	for(i = 0; i < 12; i++)
		if(months[i] == s) break;

	cout << months[(i + n) % 12] << endl;

	return 0;
}