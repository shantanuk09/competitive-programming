// Codeforces 186A - Comparing Strings
#include <bits/stdc++.h>

using namespace std;

int d;
string s, t;

int main(){
    cin >> s >> t;
    if(s.size() != t.size()) return !printf("NO\n");
    for(int i = 0; i < s.size(); i++)
        if(s[i] != t[i]) d++;
    if(d != 0 && d != 2) return !printf("NO\n");
    sort(s.begin(), s.end()), sort(t.begin(), t.end());
    if(s == t) printf("YES\n");
    else printf("NO\n");

    return 0;
}
