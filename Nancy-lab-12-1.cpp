#include <iostream>   
#include <cmath>
using namespace std;
int power(int a)
{
	int b;
	b = pow(a, 3);
	return b;
}
int main()
{
	int A;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Result is " << power(A) << endl;
	return 0;
}
