// Codeforces 747B - Mammoth's Genome Decoding
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, c, g, t;
	string s;

	cin >> n >> s;

	a = count(s.begin(), s.end(), 'A');
	c = count(s.begin(), s.end(), 'C');
	g = count(s.begin(), s.end(), 'G');
	t = count(s.begin(), s.end(), 'T');

	if(n % 4 || a > n / 4 || c > n / 4 || g > n / 4 || t > n / 4) return printf("===\n") * 0;

	for(int i = 0; i < n; i++){
		if(s[i] == '?' && a < n / 4) s[i] = 'A', a++;
		else if(s[i] == '?' && c < n / 4) s[i] = 'C', c++;
		else if(s[i] == '?' && g < n / 4) s[i] = 'G', g++;
		else if(s[i] == '?' && t < n / 4) s[i] = 'T', t++;
	}

	cout << s << endl;

	return 0;
}