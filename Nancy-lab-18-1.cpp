#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, b, n, i, j;
	cout << "Enter N" << endl;
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
	for (j = 0;j < n;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	a = n * n;
	n = n - 1;
	cout << array[i][j] << " ";
	for (a = a;a > 0;a--) {
		cout << " !" << endl;
		cout << array[j][i] << " ";
		if (j != n && i != n) j++;
		if (i != n && j == n) i++;
		if (i == n && j == n) j--;
		if (i == n && j != n) i--;
		if (i == n || j == n) n--;
	}
	return 0;
}
