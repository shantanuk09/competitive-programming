// ZSUM - Just Add It
#include <iostream>

using namespace std;

const long long BIG = 10000007;

long long modularExponent(long long a, long long b, long long m){
    if(b == 0) return 1;
    long long res;
    res = modularExponent(a % m, b / 2, m);
    if(b&1) return (a * res % m) * res % m;
    else return res * res % m;
}

int main(){
    long long n, k;
    while(cin >> n >> k){
        if(n == 0 && k == 0) break;
        else cout << (modularExponent(n, k, BIG) + 2 * modularExponent(n - 1, k, BIG) + modularExponent(n, n, BIG) + 2 * modularExponent(n - 1, n - 1, BIG)) % BIG << endl;
    }

    return 0;
}