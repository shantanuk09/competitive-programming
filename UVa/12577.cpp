// UVa 12577 - Hajj-e-Akbar
#include <iostream>

using namespace std;

int main(){
    int t = 1;
    string s;
    while((cin >> s) && s != "*"){
        cout << "Case " << t++ << ": ";
        if(s == "Hajj") cout << "Hajj-e-Akbar" << endl;
        else cout << "Hajj-e-Asghar" << endl;
    }

    return 0;
}