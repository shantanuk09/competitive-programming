// Codeforces 1204A - BowWow and the Timetable
#include <bits/stdc++.h>

using namespace std;

int main(){
	int z;
	string s, p;

	p = "1";

	cin >> s;

	if(s == "0") cout << s << endl;
	else{
		while(p.size() < s.size())
			p += "00";

		if(p.size() > s.size()){
			p.pop_back();
			p.pop_back();
		}

		z = count(p.begin(), p.end(), '0') / 2;

		if(p == s) cout << z << endl;
		else cout << z + 1 << endl;
	}

	return 0;
}