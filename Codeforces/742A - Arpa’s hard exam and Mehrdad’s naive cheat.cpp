// Codeforces 742A - Arpa’s hard exam and Mehrdad’s naive cheat
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, arr[] = {6, 8, 4, 2};

	cin >> n;

	if(n == 0) cout << "1" << endl;
	else cout << arr[n % 4] << endl;

	return 0;
}