// Codeforces 727A Transformation from A to B
#include <bits/stdc++.h>

using namespace std;

int a, b;
vector<int> vr;

bool __DFS(long long a, int b){
    if(a > b) return false;
    if(a == b){
        vr.push_back(a);
        return true;
    }
    if(__DFS(2 * a, b)){
        vr.push_back(a);
        return true;
    }
    if(__DFS(10 * a + 1, b)){
        vr.push_back(a);
        return true;
    }
    return false;
}

int main(){
    scanf("%d %d", &a, &b);
    if(__DFS(a, b)){
        printf("YES\n");
        printf("%d\n", vr.size());
        for(int i = vr.size() - 1; i >= 0; i--)
            printf("%d ", vr[i]);
        printf("\n");
    }
    else printf("NO\n");

    return 0;
}
