// Codeforces 1057A - Bmail Computer Network
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;
int n, p[SIZE];
vector<int> path;

int main(){
    p[1] = -1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
        scanf("%d", &p[i]);
    for(int v = n; v != -1; v = p[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    for(int i = 0; i < path.size(); i++)
        printf("%d ", path[i]);

    return 0;
}
