// Codeforces 534A - Exam
#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    if(n == 2 || n == 3){
        printf("%d\n", n - 1);
        if(n == 2) printf("1\n");
        else printf("1 3\n");
    }
    else{
        printf("%d\n", n);
        for(int i = (n % 2 == 1) ? n : (n - 1); i >= 1; i -= 2)
            printf("%d ", i);
        for(int i = (n % 2 == 0) ? n : (n - 1); i >= 2; i -= 2)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}
