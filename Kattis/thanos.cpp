// Kattis Thanos
#include <iostream>

using namespace std;

int main(){
    int t;
    long long P;
    long long R;
    long long F;
    cin >> t;
    while(t--){
        int years = 0;
        cin >> P >> R >> F;
        while(P <= F){
            years++;
            P *= R;
        }
        cout << years << endl;
    }
    
    return 0;
}