#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int result, i, n;
	cout << "Enter N" << endl;
	cin >> n;
	int* array = new int[n];
	for (i = 0;i < n;i++) {
		cout << "Enter arrai[" << i + 1 << "] = ";
		cin >> array[i];
	}
	result = 0;
	for (i = 1;i < n - 1;i++) {
		if (array[i] > array[i + 1] && array[i] > array[i - 1])
			result = i;
	}
	cout << "Result is = " << result + 1 << endl;
	return 0;
}
	
