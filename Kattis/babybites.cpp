// Kattis Baby Bites
#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    string answer = "makes sense";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s;
        if(s != "mumble" && s != to_string(i)) answer = "something is fishy";
    }
    cout << answer << endl;

    return 0;
}