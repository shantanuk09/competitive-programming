// UVa 11727 - Cost Cutting
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t, small, big, sum, e;
    cin >> t;
    for(int i = 1; i <= t; i++){
        small = INT_MAX, big = INT_MIN, sum = 0;
        for(int j = 0; j < 3; j++){
            cin >> e;
            sum += e, small = min(small, e), big = max(e, big);
        }
        cout << "Case " << i << ": " << sum - small - big << endl;
    }
    return 0;
}