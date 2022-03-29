// Codeforces 3A - Shortest path of the king
#include <bits/stdc++.h>

using namespace std;

int main(){
	char a, c;
	int b, d;

	cin >> a >> b >> c >> d;

	cout << max(abs(a - c), abs(b - d)) << endl;

	while(a != c || b != d){
		if(a < c){
			a++;
			cout << "R";
		}
		else if(a > c){
			a--;
			cout << "L";
		}

		if(b < d){
			b++;
			cout << "U";
		}
		else if(b > d){
			b--;
			cout << "D";
		}

		cout << endl;
	}

	return 0;
}