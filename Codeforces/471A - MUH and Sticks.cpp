// Codeforces 471A - MUH and Sticks
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 6;
int t, arr[SIZE];

int main(){
    for(int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + SIZE);
    if(arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3]) t = 1;
    else if(arr[1] == arr[2] && arr[1] == arr[3] && arr[1] == arr[4]) t = 2;
    else if(arr[2] == arr[3] && arr[2] == arr[4] && arr[2] == arr[5]) t = 3;
    else t = 4;
    if(t == 1 && arr[4] == arr[5]) printf("Elephant\n");
    else if(t == 1) printf("Bear\n");
    else if(t == 2 && arr[0] == arr[5]) printf("Elephant\n");
    else if(t == 2) printf("Bear\n");
    else if(t == 3 && arr[0] == arr[1]) printf("Elephant\n");
    else if(t == 3) printf("Bear\n");
    else printf("Alien\n");

    return 0;
}
