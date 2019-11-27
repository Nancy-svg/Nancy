#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int n, k, i, m, j;

	cout << "Enter N" << endl;
	cin >> n;
	k = 0;
	int* a = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter array[" << i + 1 << "] ";
		cin >> a[i];
	}
	cout << "Array is :  ";
	for (i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	for (i = 0;i < n;i++) {
		if (a[i] < 0)
			k++;
	}
	m = n + k;
	int* b = new int[m];
	for (i = 0;i < n;i++) {
		b[i] = a[i];
	}
	for (i = 0;i < m;i++) {
		if (b[i] < 0) {
			for (j = n;j > i + 1;j--) {
				b[j] = b[j - 1];
			}
			b[i + 1] = 0;
			i++;

		}
		
	}
	cout << endl;
	cout << "Array new is :  ";
	for (i = 0;i < m;i++) {
		cout << b[i] << " ";
	}	
	return 0;
}