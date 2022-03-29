// Codeforces 115A - Party
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e3 + 5;
int n, p, maxDistance, d[SIZE];
bool visited[SIZE], root[SIZE];
vector<int> adj[SIZE];

void addEdge(int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void __DFS(int i){
    visited[i] = true;
    auto it = adj[i].begin();
    while(it != adj[i].end()){
        if(!visited[*it]){
            d[*it] = d[i] + 1;
            __DFS(*it);
        }
        ++it;
    }
}

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &p);
        if(p == -1) root[i] = true, d[i] = 1;
        else addEdge(i, p);
    }
    for(int i = 1; i <= n; i++)
        if(root[i]) __DFS(i);
    for(int i = 1; i <= n; i++)
        maxDistance = max(maxDistance, d[i]);
    printf("%d\n", maxDistance);

    return 0;
}
