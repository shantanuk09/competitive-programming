// UVa 13034 - Solve Everything :-)
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        int count = 0;
        for(int j = 0; j < 13; j++){
            cin >> n;
            count += (n == 0);
        }
        if(!count) cout << "Set #" << i + 1 << ": Yes" << endl;
        else cout << "Set #" << i + 1 << ": No" << endl;
    }

    return 0;
}