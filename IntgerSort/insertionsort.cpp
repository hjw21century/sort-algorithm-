#include "stdafx.h"

int insertionSort(int a[], int length)
{
	int i, j, key;

	for (i = 1; i<length; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && key < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

	return 0;
}