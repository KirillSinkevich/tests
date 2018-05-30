/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.

Формат входных данных
Вводится непустая последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

1
7
9
0
Sample Output 1:

1
Sample Input 2:

1
3
3
1
0
Sample Output 2:

2
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int N, i = 0, sum = 1;
	cin >> N;
	while (N != 0) {
		if (N > i) {
			i = N;
			sum = 1;
		}
		else if (N == i) {
			sum = sum + 1;
		}
		cin >> N;
	}
	cout << sum;
	return 0;
}

