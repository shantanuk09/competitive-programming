// Codeforces 300A - Array
#include <bits/stdc++.h>

using namespace std;

int n, a;
vector<int> neg, pos, zero;

void printVector(vector<int> vr){
    printf("%d ", vr.size());
    for(int it : vr)
        printf("%d ", it);
    printf("\n");
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a < 0 && !neg.size()) neg.push_back(a);
        else if(a > 0 && !pos.size()) pos.push_back(a);
        else zero.push_back(a);
    }
    if(!pos.size()){
        sort(zero.begin(), zero.end());
        pos.push_back(zero[0]), pos.push_back(zero[1]);
        zero.erase(zero.begin(), zero.begin() + 2);
    }
    printVector(neg);
    printVector(pos);
    printVector(zero);

    return 0;
}
