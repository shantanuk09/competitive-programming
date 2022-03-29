// Codeforces 118B - Present from Lena
    #include <iostream>
    #include<algorithm>
    using namespace std;
     
    int n;
     
    int main() {
    	cin >> n;
    	for(int j = 0; j < 2 * n; j++)
    		cout << ' ';
    	cout << 0 << endl;
    	for(int i = n - 1; i >= 0; i--){
    		for(int j = 0; j < 2 * i; j++)
    			cout << ' ';
    		for(int j = 0; j <= n - i; j++)
    			cout << j << ' ';
    		for(int j = n - i - 1; j > 0; j--)
    			cout << j << ' ';
    		cout << 0 << endl;
    	}
    	for(int i = 1; i < n; i++){
    		for(int j = 0; j < 2 * i; j++)
    			cout << ' ';
    		for(int j = 0; j <= n - i; j++)
    			cout << j << ' ';
    		for(int j = n - i - 1; j > 0; j--)
    			cout << j << ' ';
    		cout << 0 << endl;
    	}
    	for(int j = 0; j < 2 * n; j++)
    		cout << ' ';
    	cout << 0 << endl;
    	return 0;
    }