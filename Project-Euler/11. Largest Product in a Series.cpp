#include <bits/stdc++.h>

using namespace std;

const int SIZE = 50;

/*	Calculates the maxmimum possible product of 4 adjacent elements in an array of size n x m.
*	The adjacent elements can occur horizontally, vertically or along both diagonals.	
*/	
long maximumProduct(long arr[][SIZE], int n, int m);

int main(){
	long arr[SIZE][SIZE];

	for(int i = 3; i < 23; i++)
		for(int j = 3; j < 23; j++)
			cin >> arr[i][j];

	cout << maximumProduct(arr, 20, 20) << endl;

	return 0;
}

long maximumProduct(long arr[][SIZE], int n, int m){
	long prod;

	prod = -1;

	// Maximum product along the horizontal direction.
	for(int i = 3; i < n + 3; i++)
		for(int j = 3; j < m + 3; j++)
			prod = max(prod, arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3]);

	// Maximum product along the vertical direction.
	for(int i = 3; i < n + 3; i++)
		for(int j = 3; j < m + 3; j++)
			prod = max(prod, arr[j][i] * arr[j + 1][i] * arr[j + 2][i] * arr[j + 3][i]);

	// Maximum product along the diagonal, moving from top left to bottom right.
	for(int i = 0; i < n + 3; i++)
		for(int j = 3; j < m + 3; j++)
			prod = max(prod, arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3]);

	// Maximum product along the diagonal, moving from bottom left to top righ
	for(int i = 0; i < n + 3; i++)
		for(int j = 3; j < m + 3; j++)
			prod = max(prod, arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3]);

	return prod;		
}
