// Codeforces 118A - String Task
#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	string s = "aeiouyAEIOUY";

	while((c = getchar()) != '\n')
		if(find(s.begin(), s.end(), c) == s.end()) cout << "." << (char) tolower(c);
	
	cout << endl;	

	return 0;
}