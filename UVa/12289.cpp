// UVa 12289 - One-Two-Three
#include <iostream>

using namespace std;

bool isSimilar(string s, string target){
    if(s.size() != target.size()) return false;
    int difference = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != target[i]) difference++;
    return (difference <= 1);
}

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if(isSimilar(s, "one")) cout << "1" << endl;
        else if(isSimilar(s, "two")) cout << "2" << endl;
        else cout << "3" << endl;
    }
    return 0;
}