// IntgerSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	int count = 0, size = 6;

	/********************************/
	int a1[6] = { 5, 1, 6, 2, 4, 3 };
	while (++count <= size) {
		printf("%d ", a1[count - 1]);
	}
	printf("\n");
	
	bubbleSort(a1,6);

	printf("bubble sort: ");
	count = 0;
	while (++count <= size) {
		printf("%d ", a1[count - 1]);
	}
	printf("\n\n");

	/********************************/
	int a2[6] = { 5, 1, 6, 2, 4, 3 };
	count = 0;
	while (++count <= size) {
		printf("%d ", a2[count - 1]);
	}
	printf("\n");

	insertionSort(a2,6);

	printf("insertion sort: ");
	while (++count <= size) {
		printf("%d ", a2[count - 1]);
	}
	printf("\n\n");

	/********************************/
	int a3[6] = { 5, 1, 6, 2, 4, 3 };
	count = 0;
	while (++count <= size) {
		printf("%d ", a3[count - 1]);
	}
	printf("\n");

	selectionSort(a3, 6);

	printf("selection sort: ");
	count = 0;
	while (++count <= size) {
		printf("%d ", a3[count - 1]);
	}
	printf("\n\n");


	/********************************/
	int a4[6] = { 5, 1, 6, 2, 4, 3 };
	count = 0;
	while (++count <= size) {
		printf("%d ", a4[count - 1]);
	}
	printf("\n");

	quicksort(a4, 0, 5);

	printf("quick sort: ");
	count = 0;
	while (++count <= size) {
		printf("%d ", a4[count - 1]);
	}
	printf("\n\n");

	/********************************/
	int a5[6] = { 5, 1, 6, 2, 4, 3 };
	count = 0;
	while (++count <= size) {
		printf("%d ", a5[count - 1]);
	}
	printf("\n");

	mergesort(a5, 0, 5);

	printf("merge sort: ");
	count = 0;
	while (++count <= size) {
		printf("%d ", a5[count - 1]);
	}
	printf("\n\n");

	/********************************/
	int a6[6] = { 5, 1, 6, 2, 4, 3 };
	count = 0;
	while (++count <= size) {
		printf("%d ", a6[count - 1]);
	}
	printf("\n");

	heapsort(a6, 6);

	printf("quick sort: ");
	count = 0;
	while (++count <= size) {
		printf("%d ", a6[count - 1]);
	}
	printf("\n\n");

    return 0;
}








void heapSort()
{
	int a[6] = { 5, 1, 6, 2, 4, 3 };
	int count = 0, size = 6;

	while (++count <= size) {
		printf("%d ", a[count - 1]);
	}
	printf("\n");

	heapsort(a, 6);

	count = 0;
	while (++count <= size) {
		printf("%d ", a[count - 1]);
	}
	printf("\n");
}



