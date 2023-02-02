#include <iostream>

using namespace std;

int main(){
    int day;
    string month;
    cin >> month >> day;
    if(month == "OCT" && day == 31 || month == "DEC" && day == 25) cout << "yup" << endl;
    else cout << "nope" << endl;
    
    return 0;
}