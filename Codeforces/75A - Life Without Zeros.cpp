// Codeforces 75A - Life Without Zeros
#include <bits/stdc++.h>

using namespace std;

int removeZero(string s);

int main(){
	int a, b;
	string p, q, r;

	cin >> a >> b;

	p = to_string(a), q = to_string(b), r = to_string(a + b);
	
	if(removeZero(r) == removeZero(p) + removeZero(q)) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

int removeZero(string s){
	int n, d;

	n = 0, d = 1;

	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] != '0'){
			n += (s[i] - '0') * d;
			d *= 10;
		}
	}

	return n;
}