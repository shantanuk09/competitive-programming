// Codeforces 1234B1 - Social Network (easy version)
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e2 + 5;

int main(){
	int n, k, id;
	deque<int> d;
	deque<int>::iterator it;

	scanf("%d %d", &n, &k);

	for(int i = 0; i < n; i++){
		scanf("%d", &id);

		it = find(d.begin(), d.end(), id);

		if(it == d.end() && d.size() < k) d.push_front(id);
		else if(it == d.end() && d.size() == k){
			d.pop_back();
			d.push_front(id);
		}
	}

	printf("%ld\n", d.size());

	while(d.size()){
		printf("%d ", d.front());
		d.pop_front();
	}

	printf("\n");

	return 0;
}