// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件
#include <math.h>

int bubbleSort(int a[], int length);
int insertionSort(int a[], int length);
void selectionSort(int a[], int length);
void quicksort(int a[], int p, int r);
void mergesort(int a[], int p, int r);
void heapsort(int a[], int length);
