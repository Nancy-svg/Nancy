#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Ведите год" << endl;
	cin >> a;
	a = a % 60;
	cout << "год ";
	switch (a / 12) {
	case 0: cout << "зелен"; break;
	case 1: cout << "красн"; break;
	case 2: cout << "желт"; break;
	case 3: cout << "бел"; break;
	case 4: cout << "черн"; break;
	}
	switch (a % 12) {
	case 0: cout << "ой обезьяны"; break;
	case 1: cout << "ой курицы"; break;
	case 2: cout << "ой собаки"; break;
	case 3: cout << "ой свиньт"; break;
	case 4: cout << "ой крысы"; break;
	case 5: cout << "ой коровы"; break;
	case 6: cout << "ого тигра"; break;
	case 7: cout << "ого зайца"; break;
	case 8: cout << "ого дракона"; break;
	case 9: cout << "ой змеи"; break;
	case 10: cout << "ой лошади"; break;
	case 11: cout << "ой овцы"; break;
	}
	return 0;
}
	
