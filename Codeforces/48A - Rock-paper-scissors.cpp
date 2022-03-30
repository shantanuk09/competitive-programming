// Codeforces 48A - Rock-paper-scissors
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	vector<string> v;
	map<int, string> m;

	m[0] = "F", m[1] = "M", m[2] = "S";

	for(int i = 0; i < 3; i++){
		cin >> s;

		v.push_back(s);
	}

	if(count(v.begin(), v.end(), "rock") == 1 && count(v.begin(), v.end(), "scissors") == 2){
		for(int i = 0; i < 3; i++)
			if(v[i] == "rock") cout << m[i] << endl;
	}
	else if(count(v.begin(), v.end(), "paper") == 1 && count(v.begin(), v.end(), "rock") == 2){
		for(int i = 0; i < 3; i++)
			if(v[i] == "paper") cout << m[i] << endl;
	}
	else if(count(v.begin(), v.end(), "scissors") == 1 && count(v.begin(), v.end(), "paper") == 2){
		for(int i = 0; i < 3; i++)
			if(v[i] == "scissors") cout << m[i] << endl;
	}
	else cout << "?" << endl;

	return 0;
}