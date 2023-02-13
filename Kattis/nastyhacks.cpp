// Kattis Nasty Hacks
#include <iostream>

using namespace std;

int main(){
    int n, r, e, c;
    cin >> n;
    while(n--){
        cin >> r >> e >> c;
        if(r > e - c) cout << "do not advertise" << endl;
        else if(r < e - c) cout << "advertise" << endl;
        else cout << "does not matter" << endl;
    }
    
    return 0;
}