// Nancy-lab-5-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>   
#include <cmath>
using namespace std;

int main()
{

	int a, k1, k2, k3, result;
	cout << "Enter Number" << endl;
	cin >> a;

	k3 = a / 100;
	a = a - k3 * 100;
	k2 = a / 10;
	k1 = a % 10;
	result = k2 * 100 + k1 * 10 + k3;
	cout << "result is ; " << result << endl;

	return 0;

}