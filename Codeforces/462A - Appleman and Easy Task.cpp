// Codeforces 462A - Appleman and Easy Task
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e2 + 5;

int main(){
	int n, c;
	char arr[SIZE][SIZE];

	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> arr[i][j];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c = 0;

			if(i - 1 >= 0 && arr[i - 1][j] == 'o') c++;
			if(i + 1 < n && arr[i + 1][j] == 'o') c++;
			if(j - 1 >= 0 && arr[i][j - 1] == 'o') c++;
			if(j + 1 < n && arr[i][j + 1] == 'o') c++;

			if(c % 2) return printf("NO\n") * 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}