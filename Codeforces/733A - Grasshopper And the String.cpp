// Codeforces 733A - Grasshopper And the String
#include <bits/stdc++.h>

using namespace std;

int main(){
	int jump, prev, n;
	string s;
	char vowel[] = {'A', 'E', 'I', 'O', 'U', 'Y'};

	jump = -1, prev = -1;

	cin >> s;

	n = s.size();

	for(int i = 0; i < n; i++){
		if(find(vowel, vowel + 6, s[i]) != (vowel + 6)){
			jump = max(i - prev, jump);
			prev = i;
		}
	}

	jump = max(jump, n - prev);

	cout << jump << endl;

	return 0;
}