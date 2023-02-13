// Kattis Number Fun
#include <iostream>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a > b) swap(a, b);
        if(a + b == c || b - a == c || a * b == c || (b % a == 0 && b / a == c)) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}