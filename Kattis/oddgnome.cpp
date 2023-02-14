// Kattis Odd Gnome
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int previous = 0;
        int current;
        int king;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> current;
            if(i != 0 && current - previous != 1) king = i;
            previous = current;
        }
        cout << king << endl;
    }

    return 0;
}