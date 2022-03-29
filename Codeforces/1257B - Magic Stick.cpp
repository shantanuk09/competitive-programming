// Codeforces 1257B - Magic Stick
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, x, y;

	cin >> t;

	while(t--){
		cin >> x >> y;

		if(x > 3) cout << "YES" << endl;
		else if(x == 1 && y == 1) cout << "YES" << endl;
		else if(x == 1 && y != 1) cout << "NO" << endl;
		else puts(y <= 3 ? "YES" : "NO");
	}

	return 0;
}
