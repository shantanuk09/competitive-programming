#include <iostream>

using namespace std;

int main(){
    int n;
    string problem;
    cin >> n;
    while(n--){
        cin >> problem;
        if(problem == "P=NP") cout << "skipped" << endl;
        else{
            bool plus = false;
            string number1, number2;
            for(auto c : problem){
                if(c == '+') plus = true;
                else if(plus == false) number1 += c;
                else number2 += c;
            }
            cout << stoi(number1) + stoi(number2) << endl;
        }
    }
    return 0;
}