#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Users\\User\\Desktop\\22 лабараторная\\2 лаб.txt";
	fstream abc;
	abc.open(path);
	char text[10000];
	int k = 0;
	
		while (!abc.eof())
		{
			abc >> text;
			for (int i = 0; [text] != 0; i++)
			{
				if (text[i] == ' ')
				{
					k = i;
				}
			}
		}
		for (int i = k + 1; text[i] != 0; i++)
		{
			abc << text[i];
		}
	}
	abc.close();
	return 0;
}
