// Kattis Stand on Zanzibar
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int previous = 0;
        int count = 0;
        while((cin >> n) && n != 0){
            if(previous != 0) count += max(0, n - 2 * previous);
            previous = n;
        }
        cout << count << endl;
    }
    
    return 0;
}