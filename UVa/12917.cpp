// UVa 12917 - Prop hunt!
#include <iostream>

using namespace std;

int main(){
    int P, H, O;
    while(cin >> P >> H >> O){
        if(H > O - P) cout << "Hunters win!" << endl;
        else cout << "Props win!" << endl;
    }

    return 0;
}