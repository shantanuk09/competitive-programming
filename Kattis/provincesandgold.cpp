#include <iostream>

using namespace std;

int main(){
    int g, s, c;
    cin >> g >> s >> c;
    int sum = 3 * g + 2 * s + c;
    if(sum > 7) cout << "Province or ";
    else if(sum > 4) cout << "Duchy or ";
    else if(sum > 1) cout << "Estate or ";
    if(sum > 5) cout << "Gold" << endl;
    else if(sum > 2) cout << "Silver" << endl;
    else cout << "Copper" << endl;
    
    return 0;
}