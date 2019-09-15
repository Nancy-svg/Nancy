#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int got, k1, k2, result;
	cout << "Enter got" << endl;
	cin >> got;

	k1 = got / 100;
	k2 = got % 100;
	if (k2 > 0)
	{
		result = k1 + 1;
		cout << "century is : " << result << endl;
	}
	else {
		result = k1;
		cout << "century is : " << result << endl;
	}

	return 0;
}


	