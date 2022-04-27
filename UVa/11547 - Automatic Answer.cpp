// UVa 11547 - Automatic Answer
#include <iostream>

using namespace std;

int main(){
    int t, n, result;
    cin >> t;
    while(t--){
        cin >> n;
        result =  ((((n * 567 / 9) + 7492) * 235) / 47) - 498;
        if(result < 0) result *= -1;
        cout << (result / 10) % 10 << endl;
    }
    return 0;
}