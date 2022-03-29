// Codeforces 1088B - Ehab and subtraction
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, a, p;
    set<int> s;
    set<int>::iterator it;

    p = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a;
        s.insert(a);
    }

    for(it = s.begin(); k && it != s.end(); ++it, k--){
        cout << *it - p << endl;
        p = *it;
    }

    while(k--)
        cout << "0" << endl;

    return 0;
}
