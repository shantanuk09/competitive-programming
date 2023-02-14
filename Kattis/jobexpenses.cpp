// Kattis Job Expenses
#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int sum = 0;
    cin >> n;
    while(n--){
        cin >> k;
        sum += (k < 0) ? abs(k) : 0;
    }
    cout << sum << endl;

    return 0;
}