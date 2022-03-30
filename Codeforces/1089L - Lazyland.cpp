// Codeforces 1089L - Lazyland
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int n, k, a[SIZE], b[SIZE], arr[SIZE];
	long long time;
	vector<int> v;

	time = 0;

	scanf("%d %d", &n, &k);

	for(int i = 0; i <= k; i++)
		arr[i] = -1;

	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i <= n; i++)
		scanf("%d", &b[i]);

	for(int i = 1; i <= n; i++){
		if(arr[a[i]] == -1) arr[a[i]] = b[i], k--;
		else if(arr[a[i]] != -1 && arr[a[i]] < b[i]){
			v.push_back(arr[a[i]]);
			arr[a[i]] = b[i];
		}
		else v.push_back(b[i]);
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < v.size() && k; i++, k--)
		time += v[i];

	cout << time << endl;

	return 0;
}