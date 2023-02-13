// UVa 11723 - Numbering Roads
#include <iostream>

using namespace std;

int main(){
    int R; 
    int N;
    int n = 1;
    while(cin >> R >> N, N){
        if((R - 1) / N > 26) cout << "Case " << n << ": impossible" << endl;
        else cout << "Case " << n << ": " << (R - 1) / N << endl;
        n++;
    }

    return 0;
}