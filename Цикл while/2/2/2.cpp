/*
Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

15
Sample Output:

3
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int i, n = 2;
	cin >> i;
	while (i % n != 0) {
		n = n + 1;
	}
	cout << n;
	return 0;
}

