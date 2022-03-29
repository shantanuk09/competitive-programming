// Codeforces 1428C - ABBB
#include <bits/stdc++.h>

using namespace std;

int t;

void bombString(){
    string s;
    stack<char> sk;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(sk.size() && s[i] == 'B') sk.pop();
        else sk.push(s[i]);
    }
    printf("%d\n", sk.size());
}

int main(){
    scanf("%d", &t);
    while(t--){
        bombString();
    }

    return 0;
}
