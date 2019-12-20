#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\2 лаб.txt";
	ofstream abc;
	abc.open(path);
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Введите количество строк: ";
		cin >> n;
		cout << "Введите количество * : ";
		cin >> k;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				abc << '*';
			}
			abc << endl;
		}
	}
	abc.close();
	return 0;
}

