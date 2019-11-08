#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "Ведите номер" << endl;
	cin >> k;
	if ((k > 9 && 21 > k) || k > 34 || k == 33 || k == 30 || k == 40) {
		switch (k) {
		case 10: cout << "десять ";break;
		case 11: cout << "одинадцать ";break;
		case 12: cout << "двенадцать ";break;
		case 13: cout << "тринадцать ";break;
		case 14: cout << "четырнадцать ";break;
		case 15: cout << "пятнадцать ";break;
		case 16: cout << "шестнадцать ";break;
		case 17: cout << "семндацать ";break;
		case 18: cout << "восемнадцать ";break;
		case 19: cout << "девятнадцать ";break;
		case 35: cout << "тридцать пять ";break;
		case 36: cout << "тридцать шесть ";break;
		case 37: cout << "тридцать семь ";break;
		case 38: cout << "тридцать восемь ";break;
		case 39: cout << "тридцать девять ";break;
		case 30: cout << "тридцать ";break;
		case 33: cout << "тридцать три ";break;
		case 40: cout << "сорок ";break;
		}
		cout << "учебных задании";
	}
	else {
		if ((k > 21 && k < 30) || k == 34 || k == 32) {
			switch (k) {
			case 22: cout << "двадцать два ";break;
			case 23: cout << "двадцать три ";break;
			case 24: cout << "двадцать четыре ";break;
			case 25: cout << "двадцать пять ";break;
			case 26: cout << "двадцать шесть ";break;
			case 27: cout << "двадцать семь ";break;
			case 28: cout << "двадцать восемь ";break;
			case 29: cout << "двадцать девять ";break;
			case 34: cout << "тридцать четыре ";break;
			case 32: cout << "тридцать два ";break;
			}
			cout << "учебных задания";
		}
		else {
			switch (k) {
			case 21: cout << "двадцать одно учебное задание";break;
			case 31: cout << "тридцать одно учебное задание";break;
			}
		}
	}
	return 0;
}
	