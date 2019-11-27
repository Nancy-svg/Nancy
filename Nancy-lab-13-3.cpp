#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, d, i, n, result;
	cout << "Enter N (n>2)" << endl;
	cin >> n;
	int* array = new int[n];
	cout << "Enter A" << endl;
	cin >> array[0];
	cout << "Enter B" << endl;
	cin >> array[1];
	result = array[0] + array[1];
	for (i = 1;i < n;i++) {
		array[i] = result;
		result = result + array[i];
	}
	cout << endl;
	cout << "New array is ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;
}
