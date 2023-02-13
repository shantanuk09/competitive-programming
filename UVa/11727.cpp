// UVa 11727 - Cost Cutting
#include <iostream>

using namespace std;

int main(){
    int t, p, q, r;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> p >> q >> r;
        cout << "Case " << i + 1 << ": " << p + q + r - max(p, max(q, r)) - min(p, min(q, r)) << endl;
    }

    return 0;
}