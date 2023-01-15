#include <iostream>

using namespace std;

int main(){
    double x;
    cin >> x;
    int miles = x * (5280.0 / 4854.0) * 1000 + 0.5;
    cout << miles << endl;

    return 0;
}