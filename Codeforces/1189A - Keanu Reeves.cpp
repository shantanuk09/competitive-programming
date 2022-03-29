// Codeforces 1189A - Keanu Reeves
#include <bits/stdc++.h>

using namespace std;

bool goodString(string s, int n);

int main(){
	int i, n;
	string s;

	cin >> n >> s;

	if(n % 2 || goodString(s, n)){
		cout << "1" << endl;
		cout << s << endl;
	}
	else{
		cout << "2" << endl;
		cout << s[0] << " ";

		for(i = 1 ; i < n; i++)
			cout << s[i];
		cout << endl;
	}

	return 0;
}

bool goodString(string s, int n){
	int i, countOf0, countOf1;

	for(i = 0, countOf0 = 0, countOf1 = 0; i < n; i++){
		if(s[i] == '0') countOf0++;
		else countOf1++;
	}

	if(countOf0 != countOf1) return true;
	else return false;
}