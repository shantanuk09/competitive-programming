// Codeforces 230A - Dragons
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;

struct dragon{
	int x, y;
} arr[SIZE]; 

bool compareDragon(dragon a, dragon b){
	if(a.x < b.x) return true;
	else return false;
}

int main(){
	int s, n;

	scanf("%d %d", &s, &n);

	for(int i = 0; i < n; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	sort(arr, arr + n, compareDragon);

	for(int i = 0; i < n; i++){
		if(s > arr[i].x) s += arr[i].y;
		else return printf("NO\n") * 0;
	}

	puts("YES");

	return 0;
}