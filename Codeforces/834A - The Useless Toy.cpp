// Codeforces 834A - The Useless Toy
#include <bits/stdc++.h>

using namespace std;

int getPosition(char c);

int main(){
	char start, end;
	int n, p, q;
	bool cw, ccw;

	cin >> start >> end >> n;

	p = getPosition(start), q = getPosition(end), n %= 4;

	cw = ((p + n) % 4) == q, ccw = ((p - n + 4) % 4) == q;

	if(cw && ccw) cout << "undefined" << endl;
	else if(cw) cout << "cw" << endl;
	else cout << "ccw" << endl;

	return 0;
}

int getPosition(char c){
	if(c == '^') return 0;
	if(c == '>') return 1;
	if(c == 'v') return 2;
	if(c == '<') return 3;
}