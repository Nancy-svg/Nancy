#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, result;
	cout << "Enter N (100 < x < 999)" << endl;
	cin >> n;
	result = n / 100;
	switch (result) {
	case 1: cout << "сто " ;break;
	case 2: cout << "двести " ;break;
	case 3: cout << "триста " ;break;
	case 4: cout << "четыреста " ;break;
	case 5: cout << "пятсот " ;break;
	case 6: cout << "шесот "  ;break;
	case 7: cout << "семсот " ;break;
	case 8: cout << "восемсот " ;break;
	case 9: cout << "девятсот " ;break;
	}

	n = n % 100;
	result = n / 10;
	switch (result) {
	case 1: switch (result)
	{
	case 1: cout << "одинадцать " ;break;
	case 2: cout << "двендцать " ;break;
	case 3: cout << "тринадцать " ;break;
	case 4: cout << "четырнадцать " ;break;
	case 5: cout << "пятнадцать " ;break;
	case 6: cout << "шестнадцать " ;break;
	case 7: cout << "семнадцать " ;break;
	case 8: cout << "восемнадцать " ;break;
	case 9: cout << "девятнадцать " ;break;
	}
			break;
	case 2: cout << "двадцать  " ;break;
	case 3: cout << "тридцать " ;break;
	case 4: cout << "сорок ";break;
	case 5: cout << "пятьдесят " ;break;
	case 6: cout << "шестьдесят " ;break;
	case 7: cout << "семьдесят " ;break;
	case 8: cout << "восемьдесят " ;break;
	case 9: cout << "девяносто " ;break;
	}
	if (result != 1) {
		switch (result) {
		case 1: cout << "один " ;break;
		case 2: cout << "два " ;break;
		case 3: cout << "три " ;break;
		case 4: cout << "четыре " ;break;
		case 5: cout << "пять " ;break;
		case 6: cout << "шесть " ;break;
		case 7: cout << "семь " ;break;
		case 8: cout << "восемь " ;break;
		case 9: cout << "девять " ;break;
		}
	}
	return 0;
}