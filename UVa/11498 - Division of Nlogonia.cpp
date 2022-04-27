// UVa 11498 - Division of Nlogonia
#include <iostream>

using namespace std;

int main(){
    int k, n, m, x, y;
    while(1){
        cin >> k;
        if(!k) break;
        cin >> n >> m;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            if(x == n || y == m) cout << "divisa" << endl;
            else if(x > n && y > m) cout << "NE" << endl;
            else if(x < n && y > m) cout << "NO" << endl;
            else if(x < n && y < m) cout << "SO" << endl;
            else cout << "SE" << endl;
        }
    }

    return 0;
}