#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	double a, x, y, result;
	cout << "Enter X" << endl;
	cin >> x;
	cout << "Enter A" << endl;
	cin >> a;
	result = a / x;

	cout << "price per kg: " << result << endl;

	cout << "enter Y" << endl;
	cin >> y;
	result = y * result;
	cout << "price per Y kg: " << result << endl; 

	return 0;

}
