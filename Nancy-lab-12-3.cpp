#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int  i,  r1,r2;
	float x;
	for (i = 0;i < 3;i++) {
		cout << "enter R1 and R2 (R1 > R2) ";
			cin >> r1 >> r2;
			x = 3.14 * r1 * r1 - 3.14 * r2 * r2;
			cout << "Result is " << x << endl;
	}
	return 0;
}