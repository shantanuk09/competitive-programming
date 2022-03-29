// Codeforces 841B - Godsend
#include <bits/stdc++.h>

using namespace std;

bool allEven;
int n, a;

int main(){
    allEven = true;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a&1) allEven = false;
    }
    if(allEven) printf("Second\n");
    else printf("First\n");

    return 0;
}
