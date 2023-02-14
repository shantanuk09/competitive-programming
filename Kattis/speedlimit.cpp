// Kattis Speed Limit
#include <iostream>

using namespace std;

int main(){
    int n;
    while((cin >> n) && n != -1){
        int s;
        int t;
        int previous = 0;
        int distance = 0;
        for(int i = 0; i < n; i++){
            cin >> s >> t;
            distance += s * (t - previous);
            previous = t;
        }
        cout << distance << " miles" << e
    }

    return 0;
}