// Kattis Early Winter
#include <iostream>

using namespace std;

int main(){
    int n;
    int d;
    int input;
    int year = 0;
    bool noYear = false;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> input;
        if(input > d) year++;
        else break;
        if(i == n - 1) noYear = true;
    }
    if(noYear) cout << "It had never snowed this early!" << endl;
    else cout << "It hadn't snowed this early in " << year << " years!" << endl;

    return 0;
}