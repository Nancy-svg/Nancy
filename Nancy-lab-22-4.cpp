#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\4 лаб.txt";
	fstream abc;
	abc.open(path);
	string s;
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		while (abc >> s)
		{
			cout << ' ' << s;
		}
	}
	abc.close();
	return 0;
}
