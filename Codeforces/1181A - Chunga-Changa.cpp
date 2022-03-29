// Codeforces 1181A - Chunga-Changa
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x, y, z, c, e;

    cin >> x >> y >> z;

    c = (x + y) / z;

    if(c > x / z + y / z) e = z - max(x % z, y % z);
    else e = 0;

    cout << c << " " << e << endl;

    return 0;
}
