// Kattis Cold-puter Science
#include <iostream>

using namespace std;

int main(){
    int n;
    int t;
    int count = 0;
    cin >> n;
    while(n--){
        cin >> t;
        count += (t < 0);
    }
    cout << count << endl;

    return 0;
}