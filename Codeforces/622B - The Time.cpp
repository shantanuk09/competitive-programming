// Codeforces 622B - The Time
#include <bits/stdc++.h>

using namespace std;

int main(){
	int hh, mm, mi;

	scanf("%d:%d\n%d", &hh, &mm, &mi);

	hh = ((hh * 60 + mm + mi) / 60) % 24;
	mm = (hh * 60 + mm + mi) % 60;
	 
	if(hh < 10) cout << "0" << hh << ":";
	else cout << hh << ":";

	if(mm < 10) cout << "0" << mm << endl;
	else cout << mm << endl;

	return 0;
}