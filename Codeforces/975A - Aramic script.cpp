// Codeforces 975A - Aramic script
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, word;
	string p;
	set<int> roots;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> p;

		word = 0;

		for(int j = 0; j < p.size(); j++)
			word = word | (1 << (p[j] - 'a'));

		roots.insert(word);
	}

	cout << roots.size() << endl;

	return 0;
}