// Codeforces 729A - Interview with Oleg
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string p, q;

	cin >> n >> p;

	for(int i = 0; i < n;){
		if(i + 2 < n && p[i] == 'o' && p[i + 1] == 'g' && p[i + 2] == 'o'){
			i += 3;

			while(i + 1 < n && p[i] == 'g' && p[i + 1] == 'o')
				i += 2;

			q += "***";
		}
		else q += p[i++];
	}

	cout << q << endl;

	return 0;
}