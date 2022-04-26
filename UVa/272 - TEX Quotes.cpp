#include <iostream>

using namespace std;

int main(){
    char c;
    int start = 0;
    while((c = getchar()) != EOF){
        if(c == '"' && !start){
            cout << "``";
            start = 1;
        }
        else if(c == '"' && start){
            cout << "''";
            start = 0;
        }
        else cout << c;
    }

    return 0;
}