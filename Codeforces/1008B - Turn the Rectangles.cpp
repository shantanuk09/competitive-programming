// Codeforces 1008B - Turn the Rectangles
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, prevH, W, H;

    scanf("%d %d %d", &n, &W, &H);

    prevH = max(H, W);

    for(int i = 1; i < n; i++){
        scanf("%d %d", &W, &H);

        if(prevH >= max(W, H)) prevH = max(W, H);
        else if(prevH >= min(W, H)) prevH = min(W, H);
        else return printf("NO\n") * 0;
    }

    printf("YES\n");

    return 0;
}
