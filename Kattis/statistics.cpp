// Kattis Statistics
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    int e;
    for(int i = 0; cin >> n; i++){
        int small = INT_MAX;
        int big = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> e;
            small = min(small, e);
            big = max(big, e);
        }
        cout << "Case " << i + 1 << ": " << small << " " << big << " " << big - small << endl;
    }

    return 0;
}