// Codeforces 1157A - Reachable Numbers
#include <bits/stdc++.h>

using namespace std;

int n;
set<int> st;

int main(){
    scanf("%d", &n);
    while(st.find(n) == st.end()){
        st.insert(n);
        n++;
        while(n % 10 == 0)
            n /= 10;
    }
    printf("%d\n", st.size());

    return 0;
}
