// UVa 13130 - Cacho
#include <iostream>
#include <algorithm>
#define SIZE 5

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[SIZE];
        bool scala = true;
        for(int i = 0; i < SIZE; i++)
            cin >> arr[i];
        sort(arr, arr + SIZE);
        for(int i = 1; i < SIZE; i++)
            if(arr[i - 1] + 1 != arr[i]) scala = false;
        if(scala) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}