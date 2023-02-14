// UVa 11498 - Division of Nlogonia
#include <iostream>

using namespace std;

int main(){
    int k;
    while((cin >> k) && k != 0){
        int x;
        int y;
        int n;
        int m;
        cin >> x >> y;
        for(int i = 0; i < k; i++){
            cin >> n >> m;
            if(n > x && m > y) cout << "NE" << endl;
            else if(n < x && m > y) cout << "NO" << endl;
            else if(n < x && m < y) cout << "SO" << endl;
            else if(n > x && m < y) cout << "SE" << endl;
            else cout << "divisa" << endl;
        }
    } 

    return 0;
}