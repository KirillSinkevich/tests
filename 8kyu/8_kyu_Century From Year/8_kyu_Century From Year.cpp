// 8_kyu_Century From Year.cpp: определяет точку входа для консольного приложения.
//

//The first century spans from the year 1 up to and including the year 100, 
//The second - from the year 101 up to and including the year 200, etc.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int CenturyFromYear(int year)
{
	int i;

	i = ((year + 99) / 100);
	
	return i;
}

int main()
{
	int i;
	setlocale(LC_ALL, "Rus");
	cout << "Введите год :" << endl;
	cin >> i;
	cout << "Вы ввели год :" << i << endl;
	cout << "Век :" << CenturyFromYear(i) << endl;
	system("pause");
    return 0;
}

