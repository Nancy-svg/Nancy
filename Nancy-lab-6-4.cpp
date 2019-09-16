#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, s, k1, k2,  result, result_1; 

	cout << "Enter hight (A)" << endl;
	cin >> a;
	cout << "Enter widht (B)" << endl;
	cin >> b;
	cout << "Enter side of the square (S)" << endl;
	cin >> s;

	k1 = a / s;
	k2 = b / s;
	result = k1 * k2;
	cout << "Namber square : " << result << endl;

	result_1 = a * b;
	result *= (s * s);
	result = result_1 - result;
	cout << "result is : " << result << endl;


}
