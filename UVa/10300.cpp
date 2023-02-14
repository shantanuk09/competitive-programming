// UVa 10300 - Ecological Premium
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int farmSize;
        int animalCount;
        int friendliness;
        int premium = 0;
        for(int i = 0; i < n; i++){
            cin >> farmSize >> animalCount >> friendliness;
            premium += farmSize * friendliness;
        }
        cout << premium << endl;
    }
    
    return 0;
}