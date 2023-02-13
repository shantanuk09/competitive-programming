// UVa 11764 - Jumping Mario
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t;
    int n;
    int height;
    cin >> t;
    for(int i = 0; i < t; i++){
        int current = INT_MIN;
        int high = 0;
        int low = 0;
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> height;
            if(current == INT_MIN) /* Do nothing. */;
            else if(height > current) high++;
            else if(height < current) low++;
            current = height;
        }
        cout << "Case " << i + 1 << ": " << high << " " << low << endl;
    }

    return 0;
}