#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, i, n;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter arrai[" << i + 1 << "] = ";
		cin >> array[i];
	}
	a = array[1];
	for (i = 1;i < n;i = i + 2) {
		if (array[i] < a) a = array[i];
	}
	cout << "Result is = " << a << endl;
	return 0;
}
