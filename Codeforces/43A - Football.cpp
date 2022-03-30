// Codeoforces 43A - Football
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, g;
	string team, winner;
	map<string, int> score;

	g = -1;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> team;
		score[team]++;
	}

	for(auto it = score.begin(); it != score.end(); ++it)
		if(it -> second > g) winner = it -> first, g = it -> second;

	cout << winner << endl;

	return 0;
}