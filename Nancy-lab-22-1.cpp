#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\1 лаб.txt";
	fstream abc;
	abc.open(path);
	char s[10000];
	int k = 0;
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		while (!abc.eof())
		{
			abc >> s;
			for (int i = 0; s[i] != 0; i++)
			{
				if (s[i] == ' ')
				{
					k = i;
					break;
				}
			}
		}
		for (int i = k + 1; s[i] != 0; i++)
		{
			abc << s[i];
		}
	}
	abc.close();
	return 0;
}