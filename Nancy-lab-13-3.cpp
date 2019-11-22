#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, d, i, n, result;
	cout << "Enter N (n>2)" << endl;
	cin >> n;
	int* array = new int[n];
	cout << "Enter A" << endl;
	cin >> a;
	cout << "Enter B" << endl;
	cin >> d;
	array[0] = a;
	array[1] = d;
