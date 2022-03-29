// Codeforces 1111A - Superhero Transformation
#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c){
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
	else return false;
}

int main(){
	int n, m;
	string s, t;

	cin >> s >> t;

	n = s.size(), m = t.size();

	if(n != m) return printf("No\n") * 0;
	
	for(int i = 0; i < n; i++)
		if(isVowel(s[i]) != isVowel(t[i])) return printf("No\n") * 0;

	printf("Yes\n");

	return 0;
}