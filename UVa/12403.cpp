// UVa 12403 - Save Setu
#include <iostream>

using namespace std;

int main(){
    int t;
    int donation = 0;
    cin >> t;
    while(t--){
        string word;
        int x;
        cin >> word;
        if(word == "donate"){
            cin >> x;
            donation += x;
        }
        else cout << donation << endl;
    }

    return 0;
}