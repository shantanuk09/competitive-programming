#include <iostream>

using namespace std;

int main(){
    int articles, impact;
    cin >> articles >> impact;
    cout << articles * (impact - 1) + 1 << endl;

    return 0;
}