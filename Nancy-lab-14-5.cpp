#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int result, i, n, j;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter arrai[" << i + 1 << "] = ";
		cin >> array[i];
	}
	for (i = 0;i < n;i++) {
		for (j = 0;i < n;j++) {
			if (array[i] == array[j] && i != j) {
				cout << "result is = " << i + 1 << " and " << j + 1 << endl;
				i = n;
				j = n;
			}
		}
	}
	return 0;
}