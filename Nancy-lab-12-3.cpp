#include <iostream>   
#include <cmath>
using namespace std;
float RingS(float r1 ,float r2)
{
	float result;
	result = 3.14 * r1 * r1 - 3.14 * r2 * r2;
	return result;
}
int main()
{
	float r1, r2;
	cout << "enter R1 and R2 (R1 > R2) ";
	cin >> r1 >> r2;
	cout << "Result is " << RingS(r1 ,r2) << endl;
}
