#include <iostream>

using namespace std;

int main(){
    int n;
    float q, y, total = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> q >> y;
        total += q * y;
    }
    cout << total << endl;
    
    return 0;
}