/*
Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:

23
52
8
43
Sample Output:

8
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int a, b, x, y, m;
	cin >> a >> b >> x >> y;
	m = a * b;
	if (b < a) { m = b; b = a; a = m; }
	if (x < m) { m = x; }
	if (y < m) { m = y; }
	if (a - x < m) { m = a - x; }
	if (b - y < m) { m = b - y; }
	cout << m;
	return 0;
}

