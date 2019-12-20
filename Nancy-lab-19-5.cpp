#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int sum, k, n, m, i, j, l;
	sum = 0;
	cout << "Enter M" << endl;
	cin >> n;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			cout << "Array [" << i + 1 << "][" << j + 1 << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (i = 0;i < n;i++) {
		sum = 0;
		for (j = i;j >= 0; j--) {
			sum = sum + array[i - j][n - 1 - j];
		}
		cout << "sum " << sum <<endl;
	}
	for (j = 1; j < n;j++) {
		sum = 0;
		for (i = j;i < n;i++) {
			sum = sum + array[i][i - j];
		}
		cout << "sum " << sum << endl;
	}
	
	return 0;
}
		