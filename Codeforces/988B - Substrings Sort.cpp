// Codeforces 988B - Substrings Sort
#include <bits/stdc++.h>

using namespace std;

bool ans;
const int SIZE = 1e2 + 5;
int n;
string s[SIZE];

int main(){
    ans = true;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n, [](const string &p, const string &q) {return p.size() < q.size();});
    for(int i = 1; i < n; i++)
        if(s[i].find(s[i - 1]) == string::npos) ans = false;
    if(ans){
        printf("YES\n");
        for(int i = 0; i < n; i++)
            cout << s[i] << endl;
    }
    else printf("NO\n");

    return 0;
}
