// UVa 13012 - Identifying tea
#include <iostream>

using namespace std;

int main(){
    int t;
    while(cin >> t){
        int guess;
        int count = 0;
        for(int i = 0; i < 5; i++){
            cin >> guess;
            count += (guess == t);
        }
        cout << count << endl;
    }

    return 0;
}