// Codeforces 1038B - Non-Coprime Partition
#include <bits/stdc++.h>

using namespace std;

int n, sum;

int main(){
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    for(int i = n; i > 1; i--){
        if(__gcd(sum, sum - i) > 1){
            printf("Yes\n");
            printf("1 %d\n", i);
            printf("%d ", n - 1);
            for(int j = 1; j <= n; j++)
                if(j != i) printf("%d ", j);
            printf("\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}
