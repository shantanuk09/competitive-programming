// Codeforces 1478B - Nezzar and Lucky Number
#include <bits/stdc++.h>

using namespace std;

int i, t, q, d, a;
vector<int> vr;

bool isSum(vector<int> vr, int n, int sum){
    for(int i = 0; i < n; i++)
        if(sum % vr[i] == 0) return true;
    return false;
}

bool isSubsetSum(vector<int> vr, int n, int sum){
    if(sum == 0) return true;
    if(n == 0) return false;
    if(vr[n - 1] > sum) return isSubsetSum(vr, n - 1, sum);
    return isSum(vr, n, sum) || isSum(vr, n, sum - vr[n - 1]) || isSubsetSum(vr, n - 1, sum) || isSubsetSum(vr, n - 1, sum - vr[n - 1]);
}

int main(){
    scanf("%d", &t);
    while(t--){
        i = 0;
        scanf("%d %d", &q, &d);
        while(10 * i + d < 10 * d){
            vr.push_back(10 * i + d);
            i++;
        }
        for(i = 0; i < q; i++){
            scanf("%d", &a);
            if(a >= 10 * d) printf("YES\n");
            else if(isSubsetSum(vr, vr.size(), a)) printf("YES\n");
            else printf("NO\n");
        }
        vr.clear();
    }
    return 0;
}
