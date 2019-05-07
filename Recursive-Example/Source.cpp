/*
Create and array of 20 random numbers between 1-100 and sort only from middle to end index by both iterative and recursive functions.
Write a C++ code and algorithm for the above problem
*/

#include "selectSort.h"

int main()
{
	srand(time(NULL));
	int size = 20;
	int *iArray = new int[size];

	selectSort *sSort = new selectSort(iArray);
	sSort->print(iArray,size);
	cout << "Iterative Function Sort:\n";
	sSort->DoSelectSort(iArray, size);
	sSort->print(iArray, size);
	cout << "Recursive Function Sort:\n";
	sSort->DoSelectSortR(iArray, size);
	sSort->print(iArray, size);

	delete[] iArray;
	iArray = NULL;
	delete sSort;
	sSort = NULL;

	system("pause");
	return 0;
}