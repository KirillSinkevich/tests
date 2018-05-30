/*
По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

50
Sample Output:

1 4 9 16 25 36 49
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i = 1, n;
	cin >> n;
	while (pow(i, 2) <= n) {
		cout << pow(i, 2) << " ";
		i = i + 1;
	}
	return 0;
}

