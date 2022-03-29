// Codeforces 1151A - Maxim and Biology
#include <bits/stdc++.h>

using namespace std;

int diff(char c1, char c2){
    return min(abs(c1 - c2), 26 - abs(c1 - c2));
}

int operation(string s){
    return diff(s[0], 'A') + diff(s[1], 'C') + diff(s[2], 'T') + diff(s[3], 'G');
}

int n, d = 1255;
string s;

int main(){
    cin >> n >> s;

    for(int i = 0; i <= n - 4; i++)
        d = min(d, operation(s.substr(i, 4)));

    printf("%d\n", d);

    return 0;
}
