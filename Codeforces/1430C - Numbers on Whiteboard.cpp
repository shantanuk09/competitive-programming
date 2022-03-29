// Codeforces 1430C - Numbers on Whiteboard
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, x, y;
	stack<int> st;

	cin >> t;

	while(t--){
		cin >> n;

		for(int i = 1; i <= n; i++)
			st.push(i);

		cout << "2" << endl;

		for(int j = 1; j <= n - 1; j++){
			x = st.top(), st.pop();
			y = st.top(), st.pop();
			st.push((x + y + 1) / 2);
			cout << y << " " << x << endl;
		}
	}

	return 0;
}