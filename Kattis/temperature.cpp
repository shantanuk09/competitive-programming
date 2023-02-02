#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    y--;
    if(y < 0.5 && x == 0) cout << "ALL GOOD" << endl;
    else if(y < 0.5) cout << "IMPOSSIBLE" << endl;
    else cout << setprecision(9) << - x / y << endl;
    
    return 0;
}