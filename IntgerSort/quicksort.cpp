#include "stdafx.h"


int partition(int a[], int p, int r)
{
	int i, j, pivot, temp;
	pivot = a[p];
	i = p;
	j = r;
	while (1)
	{
		while (a[i] < pivot && a[i] != pivot)
			i++;
		while (a[j] > pivot && a[j] != pivot)
			j--;
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		else
		{
			return j;
		}
	}
}

void quicksort(int a[], int p, int r)
{
	if (p < r)
	{
		int q;
		q = partition(a, p, r);
		quicksort(a, p, q);
		quicksort(a, q + 1, r);
	}
}