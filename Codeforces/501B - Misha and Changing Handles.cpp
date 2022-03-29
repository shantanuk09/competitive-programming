// Codeforces 501B - Misha and Changing Handles
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3 + 5;
bool found;
int q, c;
string s, t, handle1[SIZE], handle2[SIZE];

int main(){
    scanf("%d", &q);
    while(q--){
        found = false;
        cin >> s >> t;
        for(int i = 0; i < c; i++)
            if(handle2[i] == s) handle2[i] = t, found = true;
        if(!found){
            handle1[c] = s, handle2[c] = t;
            c++;
        }
    }
    printf("%d\n", c);
    for(int i = 0; i < c; i++)
        cout << handle1[i] << " " << handle2[i] << endl;

    return 0;
}
