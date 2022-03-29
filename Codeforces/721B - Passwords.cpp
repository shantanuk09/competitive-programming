// Codeforces 721B - Passwords
#include <bits/stdc++.h>

using namespace std;

int n, k, best, worst;
string s, p;
vector<string> vr;

int main(){
    best = 1;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        cin >> s;
        vr.push_back(s);
    }
    cin >> p;
    for(int i = 0; i < n; i++){
        if(vr[i].size() < p.size()) best++;
        if(vr[i].size() <= p.size()) worst++;
    }
    best += (best - 1) / k * 5, worst += (worst - 1) / k * 5;
    printf("%d %d\n", best, worst);

    return 0;
}
