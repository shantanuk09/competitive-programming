// Codeforces 131A - cAPS lOCK
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	bool mistake;

	mistake = true;

	cin >> s;

	for(int i = 1; i < s.size(); i++)
		if(islower(s[i])) mistake = false;

	if(mistake){
		for(int i = 0; i < s.size(); i++){
			if(isupper(s[i])) cout << (char) tolower(s[i]);
			else cout << (char) toupper(s[i]);
		}
		cout << endl;
	}
	else cout << s << endl;

	return 0;
}