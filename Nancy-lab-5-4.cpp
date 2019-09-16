#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int a, b, result;
	cout << "Enter Number" << endl;
	cin >> a;
	
	result = a / 10;
	b = a % 10;
	result = result + b * 10;
	cout << "result is ; " << result << endl;

	return 0;

}