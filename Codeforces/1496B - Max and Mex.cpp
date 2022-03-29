// Codeforces 1496B - Max and Mex
#include <bits/stdc++.h>

using namespace std;

bool flag;
int t, n, k, e, a, b;
set<int> st;

int main(){
    scanf("%d", &t);
    while(t--){
        flag = false;
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++){
            scanf("%d", &e);
            st.insert(e);
        }
        for(int i = 0; !flag; i++)
            if(st.find(i) == st.end()) a = i, flag = true;
        b = *st.rbegin();
        if(!k) printf("%d\n", n);
        else if(a == b + 1) printf("%d\n", n + k);
        else if(st.find((a + b + 1) / 2) == st.end()) printf("%d\n", n + 1);
        else printf("%d\n", n);
        st.clear();
    }

    return 0;
}
