#include <iostream>

using namespace std;

int main(){
    int n, start;
    cin >> n;
    for(start = 2; n; start += (start - 1), n--)
        ;
    cout << start * start << endl;
    
    return 0;
}