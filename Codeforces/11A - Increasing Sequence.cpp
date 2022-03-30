// Codeforces 11A - Increasing Sequence
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, b, last, moves, totalMoves;

	last = 0, moves = 0, totalMoves = 0;

	cin >> n >> d;

	for(int i = 0; i < n; i++){
		cin >> b;

		if(b <= last){
			moves = (last - b + d) / d;
			totalMoves += moves;
			last = b + moves * d;
		}
		else last = b;
	}

	cout << totalMoves << endl;

	return 0;
}