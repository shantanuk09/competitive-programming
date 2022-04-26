// UVa 10550 - Combination Lock
#include <iostream>

using namespace std;

int main(){
    int start, first, second, third;
    while(1){
        cin >> start >> first >> second >> third;
        if(!start && !first && !second && !third) break;
        printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
    }

    return 0;
}