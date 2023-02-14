// Kattis Star Arrangements
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for(int i = 2; i <= n / 2 + 1; i++)
        for(int j = i - 1; j <= i; j++)
            if(n % (i + j) == 0 || (n - i) % (i + j) == 0) cout << i << "," << j << endl;
    
    return 0;
}