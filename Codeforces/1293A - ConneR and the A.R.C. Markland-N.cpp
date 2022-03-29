// Codeforces 1293A - ConneR and the A.R.C. Markland-N
#include <bits/stdc++.h>

using namespace std;

int t;

void stairs(){
    int n, s, k, a;
    set<int> st;
    scanf("%d %d %d", &n, &s, &k);
    for(int i = 0; i < k; i++){
        scanf("%d", &a);
        st.insert(a);
    }
    for(int i = 0; ; i++){
        if((s - i >= 1 && st.find(s - i) == st.end()) || (s + i <= n && st.find(s + i) == st.end())){
            printf("%d\n", i);
            return;
        }
    }
}

int main(){
    scanf("%d", &t);
    while(t--){
        stairs();
    }

    return 0;
}
