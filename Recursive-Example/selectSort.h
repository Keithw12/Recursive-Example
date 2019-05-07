#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class selectSort
{
public:
	selectSort(int[]);
	void DoSelectSort(int[], unsigned int);
	void print(int a[], unsigned int size);
	void DoSelectSortR(int [], unsigned int);
};

