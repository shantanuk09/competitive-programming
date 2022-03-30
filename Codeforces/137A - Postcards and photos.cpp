// Codeforces 137A - Postcards and photos
#include <bits/stdc++.h>

using namespace std;

int main(){
	int card, photo, visit;
	string s;

	visit = 0;

	cin >> s;

	for(int i = 0, card = 0, photo = 0; i < s.size(); visit++){
		if(s.back() == 'C'){
			while(s.size() && s.back() == 'C' && card != 5)
				s.pop_back(), card++;
		}
		else{
			while(s.size() && s.back() == 'P' && photo != 5)
				s.pop_back(), photo++;
		}

		card = 0, photo = 0;
	}

	cout << visit << endl;

	return 0;
}