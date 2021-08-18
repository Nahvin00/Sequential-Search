#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Sequential.h"
bool Sequential::SequentialSearch(int array[], int SIZE,
	int target, int& locWanted)
{
	int index = 0;
	bool found = false;
	while (index < SIZE - 1)
	{
		if (array[index] != target)
			index++;
		else
		{
			found = true;
			locWanted = index;
			break;
		}
	}
	return found;
}