#include <iostream>

using namespace std;

int main(){
    int x, n, p, left = 0;
    cin >> x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p;
        left += x - p;
    }
    cout << x + left << endl;

    return 0;
}