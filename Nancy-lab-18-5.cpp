#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int ko1, ko2, k, n, m, i, j;
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
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			k = array[i][j] % 2;
			if (k == 1) {
				ko1++;
				ko2 = j;
			}
			else {
				i = n;
				ko1 = 0;
			}
		}
		if (ko1 != 0) {
			j = m;	
			cout << "Result is : " << ko2  << endl;
		}
	}
	return 0;
}


