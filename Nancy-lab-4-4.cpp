#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	float v1, v2, s, t, result;
	cout << "Enter V1" << endl;
	cin >> v1;
	cout << "Enter V2" << endl;
	cin >> v2;
	cout << "Enter T" << endl;
	cin >> t;
	cout << "Enter S" << endl;
	cin >> s;
	result = v1 + v2;
	result = result * t;
	result = result + s;

	cout << "Rstoyanie = " << result << endl;

	return 0;

}
