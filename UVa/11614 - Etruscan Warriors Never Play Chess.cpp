#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    long long x, root;
    cin >> n;
    while(n--){
        cin >> x;
        root = (-1 + sqrt(1 + 8 * x)) / 2;
        cout << root << endl;
    }

    return 0;
}