// Codeoforces 868A - Bark to Unlock
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n;
	string password, bark[SIZE];

	cin >> password >> n;

	for(int i = 0; i < n; i++)
		cin >> bark[i];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if((bark[i] + bark[j]).find(password) != string::npos) return printf("YES\n") * 0;

	cout << "NO" << endl;

	return 0;
}