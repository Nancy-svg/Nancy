#include <iostream>    
using namespace std;
int main()
{
	float  a, b, b2 ,a2;
	float result;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	a2 = a * a;
	b2 = b * b;
	result = a2 + b2;
	cout << "Summa quadratov" << " " << result << endl;
	result = a2 - b2;
	cout << "Raznost quadratov" << " " << result << endl;
	result = a2 * b2;
	cout << "Proivedenie quadratov" << " " << result << endl;
	result = a2 / b2;
	cout << "Chastnoe quadratov" << " " << result << endl;
	return 0;

}