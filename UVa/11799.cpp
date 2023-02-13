// UVa 11799 - Horror Dash
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        int e;
        int big = INT_MIN;
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> e;
            big = max(big, e);
        }
        cout << "Case " << i + 1 << ": " << big << endl;
    }

    return 0;
}