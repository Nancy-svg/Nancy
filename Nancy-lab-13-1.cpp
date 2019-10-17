#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, i, n;
	cout << "Enter N" << endl;
	cin >> n;
	int *array = new int [n];
	array[0] = 1;
	cout << array[0] << endl;
	for (i = 1; i = n; i++) {
		array[i] = array[i - 1] + 2;
		cout << array[i] << endl;
	}
	return 0;
}
