// Codeforces 1253A - Single Push
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;

int main(){
	int i, j, t, n, a[SIZE], d[SIZE], b, k;
	bool push;

	scanf("%d", &t);

	while(t--){
		k = 0;
		push = true;

		scanf("%d", &n);

		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);

		for(int i = 0; i < n; i++){
			scanf("%d", &b);
			if(a[i] > b) push = false;
			if(!k && a[i] != b) k = b - a[i];
			if(a[i] != b && b - a[i] != k) push = false;
		
			d[i] = b - a[i];	
		}

		if(!push) printf("NO\n");
		else{
			i = 0, j = n - 1;

			while(i < n && d[i] != k)
				i++;
			while(j >= 0 && d[j] != k)
				j--;

			for(; i <= j; i++)
				if(d[i] != k) push = false;

			if(push) printf("YES\n");
			else printf("NO\n");
		}	
	}

	return 0;
}