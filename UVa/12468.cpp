// UVa 12468 - Zapping
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int source, target;
    while((cin >> source >> target) && source != -1 && target != -1){
        int difference = abs(source - target);
        cout << min(difference, 100 - difference) << endl;
    }

    return 0;
}