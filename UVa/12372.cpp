// UVa 621 - Secret Research
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int len = s.size();
        if(s == "1" || s == "4" || s == "78") cout << "+" << endl;
        else if(s[len - 2] == '3' && s[len - 1] == '5') cout << "-" << endl;
        else if(s[0] == '9' && s[len - 1] == '4') cout << "*" << endl;
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0') cout << "?" << endl;
        else cout << "+" << endl;
    }
    return 0;
}