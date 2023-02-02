#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x % 2) cout << x << " is odd" << endl;
        else cout << x << " is even" << endl;
    }
    
    return 0;
}