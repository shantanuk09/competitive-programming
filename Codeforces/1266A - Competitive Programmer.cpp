// Codeforces 1266A - Competitive Programmer
#include <bits/stdc++.h>

using namespace std;

string turnRed(string s, int len);

int main(){
    int n;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        cout << turnRed(s, s.size()) << endl;
    }

    return 0;
}

string turnRed(string s, int len){
    int even, zero, sum;

    even = 0, zero = 0, sum = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == '0') zero++, even++;
        else if((s[i] - '0') % 2 == 0) even++;

        sum += (s[i] - '0');
    }

    //cout << sum << " " << even << " " << zero << endl;

    if((sum % 3 == 0 && even >= 2 && zero) || zero == len) return "red";
    else return "cyan";
}
