// Codeforces 66B - Petya and Countryside
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;
int n, arr[SIZE], section, maxSection;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        section = 0;
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] <= arr[j + 1]) section++;
            else break;
        }
        for(int j = i + 1; j < n; j++){
            if(arr[j] <= arr[j - 1]) section++;
            else break;
        }
        maxSection = max(maxSection, section + 1);
    }
    printf("%d\n", maxSection);

    return 0;
}
