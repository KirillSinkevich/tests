//Given an array of integers your solution should find the smallest integer.

#include "stdafx.h"
#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
	int min = list[0];

	for (int i = 0; i < list.size(); ++i) {
		if (min > list[i])
			min = list[i];
	}
	return min;
}

