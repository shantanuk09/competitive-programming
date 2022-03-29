// Codeforces 1492B - Card Deck
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5 + 5;
int t, n, arr[SIZE], visited[SIZE];
pair<int, int> p[SIZE];

void buildDeck(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        p[i] = {arr[i], i};
        visited[i] = 0;
    }
    sort(p, p + n);
    for(int i = n - 1; i >= 0; i--){
        auto [_, idx] = p[i];
        for(int i = idx; idx < n && !visited[idx]; idx++){
            printf("%d ", arr[idx]);
            visited[idx] = 1;
        }
    }
    printf("\n");
}

int main(){
    scanf("%d", &t);
    while(t--){
        buildDeck();
    }
    return 0;
}
