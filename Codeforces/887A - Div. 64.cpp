// Codeforces 887A - Div. 64
#include <bits/stdc++.h>

using namespace std;

int main(){
    int z, one;
    string s;

    one = -1;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            one = i;
            break;
        }
    }

    if(one == -1) return printf("no") * 0;

    z = count(s.begin() + one, s.end(), '0');

    if(z >= 6) printf("yes\n");
    else printf("no\n");

    return 0;
}
