// Codeforces 102B - Sum of Digits
#include <bits/stdc++.h>

using namespace std;

long long sumOfDigits(long long n);

int main(){
	char c;
	int op, size;
	long long n;

	size = 0, op = 0, n = 0;

	while((c = getchar()) != '\n' && c != EOF)
		n += c - '0', size++;

	if(n == 0 || size == 1) return printf("0\n") * 0;
	else op = 1;

	while(n >= 10)
		n = sumOfDigits(n), op++;

	cout << op << endl;

	return 0;
}

long long sumOfDigits(long long n){
	long long sum;

	sum = 0;

	while(n){
		sum += n % 10;
		n /= 10;
	}

	return sum;
}