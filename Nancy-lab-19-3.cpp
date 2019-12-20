#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int k, k1, k2, n, m, i, j;
	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter M" << endl;
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[m];
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			cout << "Array [" << i + 1 << "][" << j + 1 << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	k = m / 2;
	k1 = n / 2;
	for (i = 0;i < k;i++) {
		for (j = 0;j < k1;j++) {
			k2 = array[i][j];
			array[i][j] = array[i + k][j + k1];
			array[i + k][j + k1] = k2;
		}
	}
	cout << "Array new" << endl;
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}