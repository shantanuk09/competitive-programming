// Codeforces 757A - Gotta Catch Em' All!
#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    int a;
    string b = "Bulbasaur";
    map<char, int> m;

    a = 1e5 + 5;

    while((c = getchar()) != '\n')
        m[c]++;

    for(int i = 0; i < b.size(); i++){
        if(b[i] == 'a' || b[i] == 'u') a = min(a, m[b[i]] / 2);
        else a = min(a, m[b[i]]);
    }

    printf("%d\n", a);

    return 0;
}
